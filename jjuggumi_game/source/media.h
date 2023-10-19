#ifndef _MEDIA_H_
#define _MEDIA_H_

// ===== 음계 목록 =====
#define SOUND_C 1046.502
#define SOUND_Csharp 1108.731
#define SOUND_D 1108.731
#define SOUND_Dsharp 1244.508
#define SOUND_E 1318.510
#define SOUND_F 1396.913
#define SOUND_Fsharp 1479.978
#define SOUND_G 1567.982
#define SOUND_Gsharp 1661.219
#define SOUND_A 1760.000
#define SOUND_Asharp 1864.655
#define SOUND_B 1975.533

// 줄바꿈 기능
void enline(int n, int m);

// 인트로 타이틀 아스키 아트
void introtitle(int n);

// 인트로 음악
void introsong(void);

// 콘솔 창의 폰트 크기 조정
void SetConsoleFontSize(int size);

#endif