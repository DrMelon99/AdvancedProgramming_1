#include "jjuggumi.h"
#include "keyin.h"

void mugunghwa(void)
{
	mugunghwa_init();
	
	dialog();

	display();
	while (1)
	{
		key_t key = get_key();
		if (key == K_QUIT) {
			break;
		}

	}


	printf("[����ȭ ���� �Ǿ����ϴ�]�� ������ �ڵ� �����Դϴ�.");
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

void mugunghwa_init(void)
{
	system("cls");

	SetConsoleFontSize(20);
	system("mode con: cols=40 lines=30");

	map_init(15, 40);

	tick = 0;
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