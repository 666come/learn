#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���100����3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
////ʹ�������ִӴ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 ,1, 3
//	//�㷨ʵ��
//	//a�з����ֵ��
//	//B��֮
//	//C�з���Сֵ
//	if (a < b)
//	{
//		int tam = a;
//		a = b;
//		b = tam;
//	}
//	if (a < c)
//	{
//		int tam = a;
//		a = c;
//		c = tam;
//	}
//	if (b < c)
//	{
//		int tam = b;
//		b = c;
//		c = tam;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//շת����� -- �������������Լ��
//int main()
//{
//	int m = 24;
//	int n = 16;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m%n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ����������Ҳ��ܱ�100������������
//		//2.�ܱ�400������������
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year%400 == 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//	}
//	printf("\n����ĸ����ǣ�%d", count);
//	return 0;
//}
//�����Ż�
//int main()
//{
//			int year = 0;
//			int count = 0;
//			for (year = 1000; year <= 2000; year++)
//			{
//				if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//					count++;
//					printf("%d ", year);
//			}
//			printf("\n����ĸ����ǣ�%d", count);
//	return 0;
//}
//дһ�����룺��ӡ100-200֮�������
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���
//		//1.�Գ���
//		//����2->i-1����
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n�����ĸ����ǣ�%d\n ", count);
//	return 0;
//}
//�����Ż�
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//sqrt -- ��ƽ������ѧ�⺯��
//	for (i = 100; i <= 200; i++)
//	{
//	
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n�����ĸ����ǣ�%d\n ", count);
//	return 0;
//}
//��������Ż�
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//sqrt -- ��ƽ������ѧ�⺯��
//	for (i = 101; i <= 200; i+=2)
//	{
//
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n�����ĸ����ǣ�%d\n ", count);
//	return 0;
//}
//<��������n�о���>


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if(b%3 == 1) //1%3������0  -- ������ȻΪ1
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//��д������һ�£�1-100֮�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//	    if (i % 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//����1/1 -1/2 +1/3 -1/4 +1/5......+ 1/99 - 1/100��ֵ����ӡ���
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//��10�����������ֵ
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//-2d -- �������
//			//2d���Ҷ���
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������Ϸ
//1.���Ի�����һ�������
//2.������

#include<stdlib.h>
void menu()
{
	printf("***********************************\n");
	printf("******    1.Play   0.exit    ******\n");
	printf("***********************************\n");
}

//RAND_MAX //--���ɵ������� 0-32767 ֮��
void game()
{
	//1.����һ�������
	int ret = rand();
	printf("%d\n", ret);
	//2.������
	
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
 }