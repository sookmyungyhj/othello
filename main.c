#include <stdio.h>
#include <stdlib.h>
#include "OthelloGameboard.h"

#define N 6 // ������ ���� ��, �� ũ�� : 6 

//#define O 0 // �鵹 
//#define X 1 //�浹 
#define empty 2 //���ڸ� 

char gameboard[N][N];

int num[2]; //�鵹,�浹 �� 

int turn; //���� : �鵹(0) -> �浹(1)

/* flip direction : 8����{����: �ϼ�,��,�ϵ�,��,����,��,����,��,����} ����;*/
//int flipdir[8][2] = {{-1,1},{0,1},{1,1},{-1,0},{1,0},{-1,-1},{0,-1},{1,-1}};


void main (void) {
	
	int rows, cols;
	
	init_othello(); //���� �ʱ�ȭ

	while (isGameEnd() == 0) { //game ���� ���� Ȯ��
		
		if(empty_space()==0){
//			turn_pass;
			break;
		}
	
	else if (empty_space()==1){

		print_othello(); //��ġ ���� ��� ��
	 	
	 	if(turn == 0){
	 		printf("Put a new WHITE othello : ");
			scanf("%d %d",&rows,&cols); //�鵹 ��ġ�� ��ǥ �Է� �ޱ�
		}
		else if(turn == 1){
			printf("Put a new BLACK othello : ");
			scanf("%d %d",&rows,&cols); //�浹 ��ġ�� ��ǥ �Է� �ޱ�
		}

		if ((put_space(rows,cols)) == 1){ //�Է� ��ǥ�� �������� üũ
	 			put_othello(rows,cols);
				//print_flipresult;//� ���������� ���
				turn_pass(); //�� �ٲ�
	 	}
	 	else
			printf("invalid input. \n"); //�������� �Է����� ���
	}
	print_othello();
	check_result(); //��� ���
	}
	return 0; 
}
