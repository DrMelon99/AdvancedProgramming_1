// 2023-2 ������α׷��� ����: �޲ٹ� ���� // ����� ���� [������, ����ȣ ���ҹ�]
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "jjuggumi.h"

#define	DATA_FILE	"jjuggumi.dat"

int main(void)
{
	jjuggumi_init();
	intro(); // �޲ٹ� ���� ��Ʈ��
	// mugunghwa(); // ����ȭ ���� �Ǿ����ϴ�
	// nightgame(); // �߰��
	// juldarigi(); // �ٴٸ���
	// jebi(); // ���� �̱�
	sample();
	ending(); // �޲ٹ� ���� ����

	return 0;
}

int randint(int low, int high)
{
	int rnum = rand() % (high - low + 1) + low;
	return rnum;
}

int jjuggumi_init(void)
{
	// SetConsoleTitle("JJUGGUMI GAME");

	SetConsoleFontSize(26);
	system("mode con: cols=25 lines=2");

	srand((unsigned int)time(NULL));

	do
	{
		printf("�÷��̾� �� (1~10): ");
		scanf_s("%d", &n_player); // �÷��̾� �� �Է� �ޱ�

	} while (n_player < 1 || n_player > 10);
	

	n_alive = n_player; // ��Ƴ��� �÷��̾� ���� �Է¹��� �÷��̾� ���� �ʱ�ȭ

	for (int i = 0; i < n_player; i++)
	{
		player[i] = true;
	} // �Է¹��� n���� �÷��̾���� ��� true(�������)�� ����

	tick = 0;

	system("cls");

	return 0;
}

void intro(void)
{
	//SetConsoleFontSize(10); // �ܼ� �۾� ũ�� ����
	//system("mode con: cols=140 lines=165"); // �ܼ� â ũ�� ����

	//enline(2, 140);
	//introsong();
	//system("cls");
}

void ending(void)
{

}

