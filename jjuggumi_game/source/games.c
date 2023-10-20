#pragma warning(disable : 4996)

#include <string.h>
#include "jjuggumi.h"
#include "keyin.h"
#include "canvas.h"
#include "media.h"

int send_message[20] = { ' ' };

void mugunghwa(void)
{
	mugunghwa_init();
	
	display();

	for (int i = DIALOG_DURATION_SEC; i > 0; i--)
	{
		strcat(send_message, (char)i);
		strcat(send_message, TIMER_MENT);

		printf("%s\n", send_message);

		// dialog(strcat((char)i, "초 후 게임시작"));
	}
	
	while (1)
	{
		

		key_t key = get_key();
		if (key == K_QUIT) {
			break;
		}

	}


	printf("[무궁화 꽃이 피었습니다]의 마지막 코드 실행입니다.");
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

	map_init(12, 40);



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