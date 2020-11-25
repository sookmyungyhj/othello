#include <stdio.h>
#include <stdlib.h>

#define N 6 // ������ ���� ��, �� ũ�� : 6 

#define O 0 // �鵹 
#define X 1 //�浹 
#define empty 2 //���ڸ� 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];

int rows, cols;
int num[2]; //�鵹,�浹 ���� 

void init_othello(); //���� �ʱ�ȭ
void print_othello(); //��ġ ���� ��� ��
void print_flipresult();//� ���������� ���
void turn_pass(); //�� ��ü  
int isGameEnd(); //game ���� ���� Ȯ��
void check_result(); //��� ���
void put_othello(a,b);

int turn; //���� : �鵹(0) -> �浹(1)

/* flip direction : {0,0}�� �������� 8����{��������,�ϵ�,�ϼ�,����,����} ����;*/
int flipdir[3][3] = {{-1,1},{0,1},{1,1},
					{-1,0},{0,0},{1,0},
					{-1,-1},{0,-1},{1,-1}};


void main () {
	
	int i,j,k,l;//�ʿ��� ������ ���� 
	
	init_othello(); //���� �ʱ�ȭ

	while (isGameEnd() == 0) { //game ���� ���� Ȯ��
	 
		print_othello(); //��ġ ���� ��� ��
	 	
	 	if(turn == 0){
	 		printf("Put a new WHITE othello : ");
			scanf("%d %d",&rows,&cols); //�鵹 ��ġ�� ��ǥ �Է� �ޱ�
		}
		else{
			printf("Put a new BLACK othello : ");
			scanf("%d %d",&rows,&cols); //�浹 ��ġ�� ��ǥ �Է� �ޱ�
		}

		if (rows>=0 && cols>=0 && rows<N &&cols<N){ //�Է� ��ǥ�� �������� üũ
	 			put_othello(rows,cols);
				print_flipresult;//� ���������� ���
				turn_pass(); //�� �ٲ�
	 	 	}
	 	else
			printf("invalid input \n"); //�������� �Է����� ���
	}
	
	print_othello();
	check_result(); //��� ���
}
