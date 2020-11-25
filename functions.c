#include "OthelloGameboard.h"

#define N 6 // 오델로 게임 행, 열 크기 : 6 

#define O 0 // 백돌 
#define X 1 //흑돌 
#define empty 2 //빈자리 

int turn;
int num[2];
char gameboard[N][N];

void init_othello(); //게임 초기화
void print_othello(); //배치 상태 출력 등
void print_flipresult();//몇개 뒤집었는지 출력
void turn_pass(); //턴 교체  
int isGameEnd(); //game 종료 조건 확인
void check_result(); //결과 출력
void put_othello(rows,cols); //게임 초기화

void init_othello(){ //게임 초기 화면 출력;

	int i,j;
	
	for(i=0;i<N;i++){          //게임 초기화;
		for(j=0;j<N;j++){
			gameboard[i][j]==empty;
		}
	}
	
	gameboard[N/2-1][N/2-1]='O'; //원래 놓여진 흑돌백돌; 
	gameboard[N/2-1][N/2]='X';
	gameboard[N/2][N/2-1]='X';
	gameboard[N/2][N/2]='O';
	
	for(i=0;i<N;i++){   //게임 첫 화면 출력; 
		for(j=0;j<N;j++){
			printf("%|%c",gameboard[i][j]);
		}
		printf("\n");
	}
}

void put_othello(rows,cols){
	
} 

int isGameEnd(){ //game 종료 조건 확인
	int a,b;

	for(a=0;a<N;a++){
		for(b=0;b<N;b++){
			if (gameboard[a][b]==empty)
				return 0;
		}
	}
	return 1;
}

void print_othello(){//배치 상태 출력 등
	int k,l;
	
	for(k=0;k<6;k++){
		printf("%d |",k);
		for(l=0;l<6;l++) printf(" %c |",gameboard[k][l]);
			printf("\n");
	}
}

void turn_pass(){
	int i;
	int num_WHITE, num_BLACK;
	if(num_WHITE <= 0 || num_BLACK<= 0){
		turn+=1;
	}
	if(num_WHITE <= 0 && num_BLACK<= 0){
		return 0; //게임종료 
	}
}

void print_flipresult(){//몇개 뒤집었는지 출력
	
}

void check_result(){ //결과 출력 
	if(num['O']>num['X'])
		printf("WHITE WIN!! \n");
	else if(num['O']<num['X'])
		printf("BLACK WIN!! \n");
	else printf("SAME SCORE! \n");
	
	return 0;
}
