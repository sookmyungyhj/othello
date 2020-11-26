#include <stdio.h>
#include <stdlib.h>

#define N 6 // 오델로 게임 행, 열 크기 : 6 

//#define O 0 // 백돌 
//#define X 1 //흑돌 
#define empty 2 //빈자리 

//StartAndEnd Functions
void init_othello(void); //게임 초기화
int isGameEnd(void); //game 종료 조건 확인

//Print Functions
char print_othello(void); //배치 상태 출력 등
void print_flipresult(void);//몇개 뒤집었는지 출력
void check_result(void); //결과 출력

//Logic Functions
int turn_pass(void); //턴 교체  
char put_othello(int rows,int cols,int put_space(int rows, int cols); //게임 초기화
int put_space(int rows,int cols);//흑돌백돌의 놓는 위치가 가능한지 확인 
int free_space(int gameboard[N][N]);//남은 칸 여부 확인 
