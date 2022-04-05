#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	while (1)//死循环
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;// continue --终止本次循环，继续进行下一次循环
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	//int ch = getchar();
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF  - end of file -> -1
//	{
//		putchar(ch);//ctrl+z  循环停止
//	}
//	//putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
	/*int ch = 0;*/
	//while ((ch=getchar()) != EOF)//EOF -- end of file 文件结束标志
	//{
	//	putchar(ch);
	//}
//	int ret = 0;
//	char password[20];
//	printf("请输入密码：>" );
//	scanf("%s", password);//缓冲区还剩一个'\n'
//	//读取一下'\n'
//	getchar();
//	printf("请确认(Y/N):> "); // --把输入缓冲区的东西清空
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else {
//		printf("密码错误\n");
//	}
//	return 0;
//}
//	int ch = 0;
//	int ret = 0;
//	char password[20];
//	printf("请输入密码：>");
//	scanf("%s", password);//缓冲区还剩一个'\n'
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):> "); // --把输入缓冲区的东西清空
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else {
//		printf("密码错误\n");
//	}
//	return 0;
//}
//int main()
//{
//	int  ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()//while循环的缺点
//{
//
//
//
//
//
//
//
//
//
//
//	int i = 0;//初始化
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	while (i < 10)//判断
//	{
//	
//		
//		
//		
//		
//		
//		
//		
//		
//		
//		//...
//		i++;//调整
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//初始化；   判断； 调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;//跳出循环
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()for循环的continue不会陷入死循环，但是while会陷入死循环
//{
//	int i = 0;
//	//初始化；   判断； 调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//跳出循环
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i = 5)//在循环体内改变了循环变量，导致代码陷入了死循环
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()//前闭后开区间的写法
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 9 ;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++) {
//			printf("hehe\n");
//		}
//	}
//	return 0 ;
//}//结果是100个hehe;
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)//去掉了初始化语句
//	{
//		for (; j < 10; j++)//去掉了初始化语句
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}//去掉初始化语句后 -- 就变成了10个hehe
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//	{
//
//		printf("hehe\n");
//	}
//	return 0;
//}//可以有俩个循环变量
int main()//一道面试题 --问循环了多少次？
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; k++)
		k++;
	return 0;
}//答：0次
