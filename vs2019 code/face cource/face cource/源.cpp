#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<limits.h>
//int main()
//{
	//ʹ�õ���������ɣ�������������
	/*int a = 3;
	int b = 5;
	int ret = 0;
	ret = a;
	a = b;
	b = ret;
	printf("a=%d b=%d\n", a, b);*/
	//��ʹ�õ���������ɣ�������������
	//int a = 3;//���������ֵ
	//int b = 5;//�������
	//INT_MAX;  2147483647//int - 4���ֽ� -32bitλ -���ֵ
	//a = b + a;
	//b = a - b;
	//a = a - b;
	//printf("a=%d b=%d\n", a, b);
	//ʹ����򽻻���������
	/*int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);
	return 0;
 }*/

//�ҳ�ֻ����һ�ε���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
//	//�ҳ�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���;
//		int count = 0;//������
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("����:%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//�����Ż�
//int main()
//{
//	//1^1^2^2^3^3^4^4^5 =5;
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,7 };
//	//�ҳ�����
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("����:%d\n", ret);
//	return 0;
//}
// �ػ�����
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };//�洢����
//	//system() -ר������ִ��ϵͳ�����
//	system("shutdown -s -t 60");//�ػ�
//
//again:
//	printf("��ע�⣺��ĵ�����1�����ڹػ���������������ȡ���ػ���>\n");//��ʾ
//	scanf("%s", &input);//%s - �ַ���
//	if (strcmp(input, "������") == 0)//�ж�input��������ǲ��ǡ�������
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}