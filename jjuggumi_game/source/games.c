#pragma warning(disable : 4996)

#include <string.h>
#include "jjuggumi.h"
#include "keyin.h"
#include "canvas.h"
#include "media.h"

int px[PLAYER_MAX], py[PLAYER_MAX], period[PLAYER_MAX];  // �� �÷��̾� ��ġ, �̵� �ֱ�

void move_random(int player, int dir)
{
	int p = player;  // �̸��� ��...
	int nx, ny;  // �������� ������ ���� �ڸ�

	// ������ ������ ���� ���� ���ٰ� ����(���� ������ ����)	

	do
	{
		if (randint(0, 10) < 7) // NPC ������ -> 70%
		{
			nx = px[p];
			ny = py[p] - 1;
		}
		else if (randint(0, 10) == 8) // NPC ���� -> 10%
		{
			nx = px[p] - 1;
			ny = py[p];
		}
		else if (randint(0, 10) == 9) // NPC �Ʒ��� -> 10%
		{
			nx = px[p] + 1;
			ny = py[p];
		}
		else // ���ڸ� -> 10%
		{
			nx = px[p];
			ny = py[p];
		}

	} while (!placable(nx, ny));

	move_tail(p, nx, ny);
}

// back_buf[][]�� ���
void move_tail(int player, int nx, int ny)
{
	int p = player;  // �̸��� ��...
	back_buf[nx][ny] = back_buf[px[p]][py[p]];
	back_buf[px[p]][py[p]] = ' ';
	px[p] = nx;
	py[p] = ny;
}

void move_manual(key_t key) {
	// �� �������� ������ �� x, y�� delta
	static int dx[4] = { -1, 1, 0, 0 };
	static int dy[4] = { 0, 0, -1, 1 };

	int dir;  // ������ ����(0~3)
	switch (key) {
	case K_UP: dir = DIR_UP; break;
	case K_DOWN: dir = DIR_DOWN; break;
	case K_LEFT: dir = DIR_LEFT; break;
	case K_RIGHT: dir = DIR_RIGHT; break;
	default: return;
	}

	// �������� ���� �ڸ�
	int nx, ny;
	nx = px[0] + dx[dir];
	ny = py[0] + dy[dir];
	if (!placable(nx, ny)) {
		return;
	}

	move_tail(0, nx, ny);
}

void mugunghwa(void)
{
	mugunghwa_init();
	display();


	// ���� ���� Ÿ�̸�
	/*for (int i = DIALOG_DURATION_SEC; i > -1 ; i--)
	{
		dialog(0 , i);
	}*/
	
	while (1)
	{
		// ���⿡ ���� "����ȭ ���� �Ǿ����ϴ�" ���ϱ� ��ġ
		younghee();

		// ����� ������ Ű�Է�
		key_t key = get_key();
		if (key == K_QUIT)
		{
			break;
		}
		else if (key != K_UNDEFINED)
		{
			move_manual(key);
		}

		// �ٸ� NPC ���� ������ �۵�
		for (int i = 1; i < n_player; i++)
		{
			if (tick % period[i] == 0)
			{
				move_random(i, -1);
			}
		}



		display();
		Sleep(10);
		tick += 10;
		
	}
}

void mugunghwa_init(void)
{
	system("cls");

	SetConsoleFontSize(20);
	system("mode con: cols=60 lines=30");

	map_init(15, 60);

	// ���� ��ġ
	for (int i = 0; i < 3; i++)
	{
		back_buf[6+i][1] = '#';
	}

	// n���� �÷��̾���� ���� ���� ������ ���� ��ġ
	int x, y;
	for (int i = 0; i < n_player; i++) {
		// ���� �ڸ��� ������ �ٽ� ����
		do {
			x = randint(1, N_ROW - 2);
			y = (N_COL - 2);
		} while (!placable(x, y));
		px[i] = x;
		py[i] = y;
		period[i] = randint(100, 250);

		back_buf[px[i]][py[i]] = '0' + i;  // (0 .. n_player-1)
	}

	tick = 0;
}

void younghee(void)
{
	int ment = 0;

	if (tick < 13100)
	{
		yh_killmode = false;

		for (int i = 0; i < 3; i++)
		{
			back_buf[6 + i][1] = '#';
		}

		switch (tick / 100)
		{
		case 5:
			while (ment < 3)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		case 25:
			while (ment < 6)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		case 45:
			while (ment < 9)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		case 65:
			while (ment < 12)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		case 85:
			while (ment < 15)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		case 100:
			while (ment < 18)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		case 115:
			while (ment < 21)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		case 125:
			while (ment < 24)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		case 127:
			while (ment < 27)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		case 130:
			while (ment < 30)
				back_buf[15][ment] = MUGUNWHA_MENT[ment++];
			break;
		}
	}
	else
	{
		yh_killmode = true;

		for (int i = 0; i < 3; i++)
		{
			back_buf[6 + i][1] = '@';
		}
		
		if (tick > 15000)
		{
			for (int i = 0; i < 30; i++)
			{
				back_buf[15][i] = '.';
			}
			display();
			for (int i = 0; i < 30; i++)
			{
				back_buf[15][i] = ' ';
			}

			tick = 0;
		}
	}
}

void nightgame(void)
{

}

void juldarigi(void)
{

}

void jebi(void)
{

}

void nightgame_init(void)
{

}
void juldarigi_init(void)
{

}
void jebi_init(void)
{

}