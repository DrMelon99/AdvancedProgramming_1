#ifndef _JJUGGUMI_H_
#define _JJUGGUMI_H_

#include <Windows.h>
#include <stdbool.h>

#include "games.h"

#define PLAYER_MAX 10 // 최대 플레이어 수 10

#define DIALOG_DURATION_SEC		4

bool player[PLAYER_MAX];  // 기본값 true, 탈락하면 false
int n_player, n_alive; // 플레이어 수, 살아남은 플레이어 수
int tick;  // 시계

int randint(int low, int high); // low 이상 high 이하 난수를 발생시키는 함수
int jjuggumi_init(void); // main() 시작 시 쭈꾸미 게임 플레이어 수를 입력 받음

// ===== 기타 목록 =====
void intro(void); // [쭈꾸미 게임 인트로] 함수
void ending(void);// [쭈꾸미 게임 엔딩] 함수
void sample(void); // [간단한 예시 샘플] 함수

#endif
