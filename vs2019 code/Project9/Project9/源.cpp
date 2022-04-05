#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int age = 40;
	/*if (age < 18)
		printf("未成年\n");*/
	/*if (age < 18)
		printf("未成年\n");
	else
		printf("成年了\n");*/
	//;//是语句 - 空语句
	/*if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 50)
		printf("壮年\n");
	else
		printf("老年\n");
	return 0;
}*/
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{  //----代码块
//		 if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else
//			printf("老年\n");
//		return 0;
//	}  // --- 代码块
//	return 0;
//	}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2);
//		printf("hehe\n");
//	}
//    else
//	printf("haha\n");
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//	  if (b == 2);
//	        printf("hehe\n");
//	  else //无法运行
//		    printf("haha\n");
//      }
//	return 0;
//}
//int main()
//{
//	int num = 4;
//	if (5 == num) // = 赋值   ==判断相等
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}
////--练习 - 打印出0-100的全部奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d  ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}
int main()
{
	int day = 0;
	scanf("%d", &day);//3
	switch (day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期天\n");
		break;
	}
	return 0;
}