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
	mugunghwa(); // ����ȭ ���� �Ǿ����ϴ�
	//nightgame(); // �߰��
	//juldarigi(); // �ٴٸ���
	//jebi(); // ���� �̱�
	ending(); // �޲ٹ� ���� ����
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

	printf("�÷��̾� ��: ");
	scanf_s("%d", &n_player); // �÷��̾� �� �Է� �ޱ�

	n_alive = n_player; // ��Ƴ��� �÷��̾� ���� �Է¹��� �÷��̾� ���� �ʱ�ȭ

	for (int i = 0; i < n_player; i++)
	{
		player[i] = true;
	} // �Է¹��� n���� �÷��̾���� ��� true(�������)�� ����

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