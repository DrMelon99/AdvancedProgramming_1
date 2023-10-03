// 2023-2 고급프로그래밍 과제: 쭈꾸미 게임 // 살려조 팀원 [박제혁, 명지호 오소민]
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "jjuggumi.h"

#define	DATA_FILE	"jjuggumi.dat"

int main(void)
{
	jjuggumi_init();
	intro(); // 쭈꾸미 게임 인트로
	mugunghwa(); // 무궁화 꽃이 피었습니다
	//nightgame(); // 야간운동
	//juldarigi(); // 줄다리기
	//jebi(); // 제비 뽑기
	ending(); // 쭈꾸미 게임 엔딩
	//sample();

	return 0;
}

int randint(int low, int high)
{
	int rnum = rand() % (high - low + 1) + low;
	return rnum;
}

int jjuggumi_init(void)
{
	system("mode con: cols=200 lines=70");
	srand((unsigned int)time(NULL));

	printf("플레이어 수: ");
	scanf_s("%d", &n_player); // 플레이어 수 입력 받기

	n_alive = n_player; // 살아남은 플레이어 수를 입력받은 플레이어 수로 초기화

	for (int i = 0; i < n_player; i++)
	{
		player[i] = true;
	} // 입력받은 n명의 플레이어들을 모두 true(살아있음)로 지정

	tick = 0;

	return 0;
}

void mugunghwa(void)
{
	tick += 10;
}

void nightgame(void)
{
	tick += 10;
}

void juldarigi(void)
{
	tick += 10;
}

void jebi(void)
{
	tick += 10;
}

void intro(void)
{
	title();

	intromedia();


}

void ending(void)
{

}