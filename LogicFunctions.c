#include <stdio.h>
#include <stdlib.h>

#define N 6 // ?????? ???? ??, ?? ??? : 6 

#define O 0 // ?? 
#define X 1 //?浹 
#define empty 2 //????? 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];

int rows, cols;
int num[2]; //??,?浹 ???? 

void init_othello(); //???? ????
void print_othello(); //??? ???? ??? ??
void print_flipresult();//?? ?????????? ???
void turn_pass(); //?? ??u  
int isGameEnd(); //game ???? ???? ???
void check_result(); //??? ???
void put_othello(a,b);

int turn; //???? : ??(0) -> ?浹(1)

/* flip direction : {0,0}?? ???????? 8????{????????,???,???,????,????} ????;*/
int flipdir[3][3] = {{-1,1},{0,1},{1,1},
					{-1,0},{0,0},{1,0},
					{-1,-1},{0,-1},{1,-1}};


void main () {
	
	int i,j,k,l;//????? ?????? ???? 
	
	init_othello(); //???? ????

	while (isGameEnd() == 0) { //game ???? ???? ???
	 
		print_othello(); //??? ???? ??? ??
	 	
	 	if(turn == 0){
	 		printf("Put a new WHITE othello : ");
			scanf("%d %d",&rows,&cols); //?? ????? ??? ??? ???
		}
		else{
			printf("Put a new BLACK othello : ");
			scanf("%d %d",&rows,&cols); //?浹 ????? ??? ??? ???
		}

		if (rows>=0 && cols>=0 && rows<N &&cols<N){ //??? ????? ???????? u?
	 			put_othello(rows,cols);
				print_flipresult;//?? ?????????? ???
				turn_pass(); //?? ???
	 	 	}
	 	else
			printf("invalid input \n"); //???????? ??????? ???
	}
	
	print_othello();
	check_result(); //??? ???
}
/*#include "OthelloGameboard.h"

#define N 6 // 오델로 게임 행, 열 크기 : 6 

//#define O 0 // 백돌 
//#define X 1 //흑돌 
#define empty 2 //빈자리 

int turn;
int temp;
int num[2];
char gameboard[N][N];

char put_othello(int rows,int cols,int put_space(rows,cols)){
	
	int cnt;//뒤집힌 돌의 갯수
	
	if(gameboard[rows][cols]==empty){ //그 칸에 놓을 수 있다면 
		//
		
		
	} 
	
	cnt++;
} 

int free_space(gameboard[N][N]){
	int a,b;
	
	for(a=0;a<N;a++){
		for(b=0;b<N;b++){
			if (gameboard[a][b]==empty)
				return 1;
		}
	}
	return 0;
}

int put_space(rows,cols){ //흑돌백돌의 놓는 위치가 가능한지 확인 
	
	int i;
	int x,y;
	
	if (gameboard[rows][cols]==empty){	
		if(rows>=0 && cols>=0 && rows<N &&cols<N){ //게임보드 내 숫자값 입력 
			for(i = -1;i < 1;i++){ //배열로 정의한 8방향내에 뒤집을 수 있는 것이 있는지 찾기 
				int x = gameboard[rows+i][cols];
				int y = gameboard[rows][cols+i];
				
				if( x==gameboard[rows][cols] || y==gameboard[rows][cols] || x==y==gameboard[rows][cols]) //x나 y중 어느 하나라도 혹은 둘다  반대 돌이어야 한다. 
					return 1;
			}
		}
		else return 0;
	}
	else if (gameboard[rows][cols]!=empty){ //빈칸에 놓을 수 없음. 
		printf("Not Empty space!");
		return 0;
	}
	else if (rows<0||cols<0||rows>N||cols>N){ //게임보드 밖에 놓을 수 없음. 
		printf("Don't over Gameboard(0~5)!");
		return 0;
	}

}

int turn_pass(){
	int i;
	int num[2];
	if(num[0] <= 0 || num[1]<= 0){
		turn+=1;
	}
	if(num[0] <= 0 && num[1]<= 0){
		return 0; //게임종료 
	}
} */
