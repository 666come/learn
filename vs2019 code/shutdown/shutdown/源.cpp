#define _CRT_SECURE_NO_WARNINGS
// �ػ�����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };//�洢����
	//system() -ר������ִ��ϵͳ�����
	system("shutdown -s -t 60");//�ػ�

again:
	printf("��ע�⣺��ĵ�����1�����ڹػ���������������ȡ���ػ���>\n");//��ʾ
	scanf("%s", &input);//%s - �ַ���
	if (strcmp(input, "������") == 0)//�ж�input��������ǲ��ǡ�������
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}