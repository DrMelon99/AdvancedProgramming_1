#ifndef _JJUGGUMI_H_
#define _JJUGGUMI_H_

#include <Windows.h>
#include <stdbool.h>

#include "games.h"

#define PLAYER_MAX 10 // �ִ� �÷��̾� �� 10

bool player[PLAYER_MAX];  // �⺻�� true, Ż���ϸ� false
int n_player, n_alive; // �÷��̾� ��, ��Ƴ��� �÷��̾� ��
int tick;  // �ð�

int randint(int low, int high); // low �̻� high ���� ������ �߻���Ű�� �Լ�
int jjuggumi_init(void); // main() ���� �� �޲ٹ� ���� �÷��̾� ���� �Է� ����

// ===== ��Ÿ ��� =====
void intro(void); // [�޲ٹ� ���� ��Ʈ��] �Լ�
void ending(void);// [�޲ٹ� ���� ����] �Լ�
void sample(void); // [������ ���� ����] �Լ�

#endif