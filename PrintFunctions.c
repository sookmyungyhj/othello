#include "OthelloGameboard.h"

#define N 6 // 오델로 게임 행, 열 크기 : 6 

//#define O 0 // 백돌 
//#define X 1 //흑돌 
#define empty 2 //빈자리 

int turn;
int num[2];
char gameboard[N][N];

char print_othello(int rows,int cols){ //배치 상태 출력 등
	int k,l;
	printf("    0   1   2   3   4   5\n");
	for(k=0;k<6;k++){
		printf("%d |",k);
		for(l=0;l<6;l++) {
			printf(" %c |",gameboard[k][l]);
		}
			printf("\n");
	}
}

void print_flipresult(int cnt){//몇개 뒤집었는지 출력

	printf("\n *flip result*\n");
	printf("N : %d, E : %d, W : %d, S : %d, NE : %d, NW : %d, SE  : %d, SW : %d",);
	
	printf("\n");
	
	if(turn==0){
		printf("WHITE : Result of fliped stone : %d",cnt);
	}
	else if(turn==1){
		printf("BLACK : Result of fliped stone : %d",cnt);
	}
	
}

void check_result(){ //결과 출력

	if(num[0]>num[1])
		printf("\n WHITE WIN!! \n");
	else if(num[0]<num[1])
		printf("\n BLACK WIN!! \n");
	else printf("\n SAME SCORE! \n");

}
