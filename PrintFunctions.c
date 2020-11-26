#include "OthelloGameboard.h"

#define N 6 // ������ ���� ��, �� ũ�� : 6 

//#define O 0 // �鵹 
//#define X 1 //�浹 
#define empty 2 //���ڸ� 

int turn;
int num[2];
char gameboard[N][N];

char print_othello(int rows,int cols){ //��ġ ���� ��� ��
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

void print_flipresult(int cnt){//� ���������� ���

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

void check_result(){ //��� ���

	if(num[0]>num[1])
		printf("\n WHITE WIN!! \n");
	else if(num[0]<num[1])
		printf("\n BLACK WIN!! \n");
	else printf("\n SAME SCORE! \n");

}
