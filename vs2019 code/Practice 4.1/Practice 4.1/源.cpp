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
	//һ����ά����-������(*���� #������)  -  һ����ά�����Ų���()
	//�����ʵ��9*9�����̣���Ҫ����11*11������
	char mine[ROWS][COLS] = {0};//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = {0};//����Ų�����׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine,show,ROW,COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}

//�����Ż�
//1.��������ף���Χû���� - չ��һƬ - �ݹ�
//2.�����