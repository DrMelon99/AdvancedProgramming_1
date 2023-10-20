#pragma warning(disable : 4996)

#include <string.h>
#include "jjuggumi.h"
#include "keyin.h"
#include "canvas.h"
#include "media.h"

int send_message[20] = { ' ' };

int px[PLAYER_MAX], py[PLAYER_MAX], period[PLAYER_MAX];  // �� �÷��̾� ��ġ, �̵� �ֱ�

void mugunghwa(void)
{
	int turncount = 0; // ~ 10

	mugunghwa_init();
	
	display();



	//for (int i = DIALOG_DURATION_SEC; i > 0; i--)
	//{
	//	strcat(send_message, (char)i);
	//	strcat(send_message, TIMER_MENT);

	//	printf("%s\n", send_message);

	//	// dialog(strcat((char)i, "�� �� ���ӽ���"));
	//}
	


	while (1)
	{
		// ���⿡ ���� "����ȭ ���� �Ǿ����ϴ�" ���ϱ� ��ġ
		turncount++;
		printf("%c", MUGUNWHA_MENT[turncount]);
		//back_buf[15][turncount] = MUGUNWHA_MENT[turncount]; // ĵ���� �ߺ� ���� �ذ� �ʿ�

		// printf("%d", turncount);
		// ����� ������ Ű�Է�
		key_t key = get_key();
		if (key == K_QUIT) {
			break;
		}
		else if (key != K_UNDEFINED) {
			move_manual(key);
		}

		// �ٸ� NPC ���� ������ �۵�
		for (int i = 1; i < n_player; i++) {
			if (tick % period[i] == 0) {
				move_random(i, -1);
			}
		}

		display();
		Sleep(1000);
		tick += 10;
		
	}
}



void mugunghwa_init(void)
{
	system("cls");

	SetConsoleFontSize(20);
	system("mode con: cols=60 lines=30");

	map_init(15, 60);

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
		period[i] = randint(100, 500);

		back_buf[px[i]][py[i]] = '0' + i;  // (0 .. n_player-1)
	}

	tick = 0;
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