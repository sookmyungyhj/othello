#include <stdio.h>
#include <stdlib.h>

#define N 6 // ������ ���� ��, �� ũ�� : 6 

//#define O 0 // �鵹 
//#define X 1 //�浹 
#define empty 2 //���ڸ� 

//StartAndEnd Functions
void init_othello(void); //���� �ʱ�ȭ
int isGameEnd(void); //game ���� ���� Ȯ��

//Print Functions
char print_othello(void); //��ġ ���� ��� ��
void print_flipresult(void);//� ���������� ���
void check_result(void); //��� ���

//Logic Functions
int turn_pass(void); //�� ��ü  
char put_othello(int rows,int cols,int put_space(int rows, int cols); //���� �ʱ�ȭ
int put_space(int rows,int cols);//�浹�鵹�� ���� ��ġ�� �������� Ȯ�� 
int free_space(int gameboard[N][N]);//���� ĭ ���� Ȯ�� 
