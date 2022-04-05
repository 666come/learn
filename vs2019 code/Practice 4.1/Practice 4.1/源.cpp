#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("**************************************\n");
	printf("***********1.play  0.exit*************\n");
	printf("**************************************\n");

}
void game()
{
	//一个二维数组-布置雷(*是雷 #不是雷)  -  一个二维数组排查雷()
	//如果想实现9*9的棋盘，需要创建11*11的数组
	char mine[ROWS][COLS] = {0};//存放布置好的雷的信息
	char show[ROWS][COLS] = {0};//存放排查出的雷的信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}

//可以优化
//1.如果不是雷，周围没有雷 - 展开一片 - 递归
//2.标记雷