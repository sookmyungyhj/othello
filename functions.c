#include "OthelloGameboard.h"

#define N 6 // ������ ���� ��, �� ũ�� : 6 

#define O 0 // �鵹 
#define X 1 //�浹 
#define empty 2 //���ڸ� 

int turn;
int num[2];
char gameboard[N][N];

void init_othello(); //���� �ʱ�ȭ
void print_othello(); //��ġ ���� ��� ��
void print_flipresult();//� ���������� ���
void turn_pass(); //�� ��ü  
int isGameEnd(); //game ���� ���� Ȯ��
void check_result(); //��� ���
void put_othello(rows,cols); //���� �ʱ�ȭ

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
			printf("%|%c",gameboard[i][j]);
		}
		printf("\n");
	}
}

void put_othello(rows,cols){
	
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

void print_othello(){//��ġ ���� ��� ��
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
		return 0; //�������� 
	}
}

void print_flipresult(){//� ���������� ���
	
}

void check_result(){ //��� ��� 
	if(num['O']>num['X'])
		printf("WHITE WIN!! \n");
	else if(num['O']<num['X'])
		printf("BLACK WIN!! \n");
	else printf("SAME SCORE! \n");
	
	return 0;
}
