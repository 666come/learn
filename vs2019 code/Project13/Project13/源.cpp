#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//输出100以内3的倍数
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
////使三个数字从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//2 ,1, 3
//	//算法实现
//	//a中放最大值，
//	//B次之
//	//C中放最小值
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
//辗转相除法 -- 求俩个数的最大公约数
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
//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被四整除并且不能被100整除的是闰年
//		//2.能被400整除的是闰年
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
//	printf("\n闰年的个数是：%d", count);
//	return 0;
//}
//代码优化
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
//			printf("\n闰年的个数是：%d", count);
//	return 0;
//}
//写一个代码：打印100-200之间的素数
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断规则
//		//1.试除法
//		//产生2->i-1的数
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
//	printf("\n素数的个数是：%d\n ", count);
//	return 0;
//}
//代码优化
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//sqrt -- 开平方的数学库函数
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
//	printf("\n素数的个数是：%d\n ", count);
//	return 0;
//}
//代码继续优化
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//sqrt -- 开平方的数学库函数
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
//	printf("\n素数的个数是：%d\n ", count);
//	return 0;
//}
//<素数求解的n中境界>


//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if(b%3 == 1) //1%3的商是0  -- 余数自然为1
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//编写程序数一下，1-100之间所有整数中出现多少个数字9
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

//计算1/1 -1/2 +1/3 -1/4 +1/5......+ 1/99 - 1/100的值，打印结果
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

//求10个整数的最大值
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//最大值
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

//9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//-2d -- 是左对齐
//			//2d是右对齐
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字

#include<stdlib.h>
void menu()
{
	printf("***********************************\n");
	printf("******    1.Play   0.exit    ******\n");
	printf("***********************************\n");
}

//RAND_MAX //--生成的数字在 0-32767 之间
void game()
{
	//1.生成一个随机数
	int ret = rand();
	printf("%d\n", ret);
	//2.猜数字
	
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
 }