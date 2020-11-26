#include "OthelloGameboard.h"

#define N 6 // ������ ���� ��, �� ũ�� : 6 

//#define O 0 // �鵹 
//#define X 1 //�浹 
#define empty 2 //���ڸ� 

int turn;
int num[2];
char gameboard[N][N];

void init_othello(){ //���� �ʱ� ȭ�� ���;

	int i,j;
	
	for(i=0;i<N;i++){          //���� �ʱ�ȭ;
		for(j=0;j<N;j++){
			gameboard[i][j]==empty;
		}
	}
	
	gameboard[N/2-1][N/2-1]='O'; //���� ������ �浹�鵹; 
	gameboard[N/2-1][N/2]='X';
	gameboard[N/2][N/2-1]='X';
	gameboard[N/2][N/2]='O';
	
	for(i=0;i<N;i++){   //���� ù ȭ�� ���; 
		for(j=0;j<N;j++){
			printf("%c%|",gameboard[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int isGameEnd(){ //game ���� ���� Ȯ��
	int a,b;

	for(a=0;a<N;a++){
		for(b=0;b<N;b++){
			if (gameboard[a][b]==empty)
				return 0;
		}
	}
	return 1;
}

