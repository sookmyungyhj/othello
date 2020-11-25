#include <stdio.h>
#include <stdlib.h>

#define N 6 // 오델로 게임 행, 열 크기 : 6 

#define O 0 // 백돌 
#define X 1 //흑돌 
#define empty 2 //빈자리 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];

int rows, cols;
int num[2]; //백돌,흑돌 갯수 

void init_othello(); //게임 초기화
void print_othello(); //배치 상태 출력 등
void print_flipresult();//몇개 뒤집었는지 출력
void turn_pass(); //턴 교체  
int isGameEnd(); //game 종료 조건 확인
void check_result(); //결과 출력
void put_othello(a,b);

int turn; //순서 : 백돌(0) -> 흑돌(1)

/* flip direction : {0,0}이 기준으로 8방위{동서남북,북동,북서,남동,남서} 존재;*/
int flipdir[3][3] = {{-1,1},{0,1},{1,1},
					{-1,0},{0,0},{1,0},
					{-1,-1},{0,-1},{1,-1}};


void main () {
	
	int i,j,k,l;//필요한 변수들 정의 
	
	init_othello(); //게임 초기화

	while (isGameEnd() == 0) { //game 종료 조건 확인
	 
		print_othello(); //배치 상태 출력 등
	 	
	 	if(turn == 0){
	 		printf("Put a new WHITE othello : ");
			scanf("%d %d",&rows,&cols); //백돌 배치할 좌표 입력 받기
		}
		else{
			printf("Put a new BLACK othello : ");
			scanf("%d %d",&rows,&cols); //흑돌 배치할 좌표 입력 받기
		}

		if (rows>=0 && cols>=0 && rows<N &&cols<N){ //입력 좌표가 적절한지 체크
	 			put_othello(rows,cols);
				print_flipresult;//몇개 뒤집었는지 출력
				turn_pass(); //턴 바꿈
	 	 	}
	 	else
			printf("invalid input \n"); //부적절한 입력임을 출력
	}
	
	print_othello();
	check_result(); //결과 출력
}
