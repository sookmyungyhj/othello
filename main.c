#include <stdio.h>
#include <stdlib.h>
#include "OthelloGameboard.h"

#define N 6 // 오델로 게임 행, 열 크기 : 6 

//#define O 0 // 백돌 
//#define X 1 //흑돌 
#define empty 2 //빈자리 

char gameboard[N][N];

int num[2]; //백돌,흑돌 턴 

int turn; //순서 : 백돌(0) -> 흑돌(1)

/* flip direction : 8방위{순서: 북서,북,북동,서,기준,동,남서,남,남동} 존재;*/
//int flipdir[8][2] = {{-1,1},{0,1},{1,1},{-1,0},{1,0},{-1,-1},{0,-1},{1,-1}};


void main (void) {
	
	int rows, cols;
	
	init_othello(); //게임 초기화

	while (isGameEnd() == 0) { //game 종료 조건 확인
		
		if(empty_space()==0){
//			turn_pass;
			break;
		}
	
	else if (empty_space()==1){

		print_othello(); //배치 상태 출력 등
	 	
	 	if(turn == 0){
	 		printf("Put a new WHITE othello : ");
			scanf("%d %d",&rows,&cols); //백돌 배치할 좌표 입력 받기
		}
		else if(turn == 1){
			printf("Put a new BLACK othello : ");
			scanf("%d %d",&rows,&cols); //흑돌 배치할 좌표 입력 받기
		}

		if ((put_space(rows,cols)) == 1){ //입력 좌표가 적절한지 체크
	 			put_othello(rows,cols);
				//print_flipresult;//몇개 뒤집었는지 출력
				turn_pass(); //턴 바꿈
	 	}
	 	else
			printf("invalid input. \n"); //부적절한 입력임을 출력
	}
	print_othello();
	check_result(); //결과 출력
	}
	return 0; 
}
