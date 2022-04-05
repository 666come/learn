#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	//printf("%c\n", '\132');//‘\’后的数字表示都是8进制的不可以有8出现
//	//\32 --32是2个8进制的数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32  -- > 10进制 26 ->作为ASCII码值代表的字符
//	printf("%c\n", '\x61');
//	return 0;
//}	
//int main()
//{
//	printf("%c\n", '\x61');//'\x' 后面加数字表示16进制数字
//	return 0;
//}
//int main()//判断语句
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);//1\0
//	if (input == 1)
//		printf("好offer");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//int main()//循环语句
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line<20000)
//	{
//		printf("敲一行代码: %d\n", line);
//		line++;
//	}
//	if(line>=20000)
//	printf("好offer\n");
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = a + b;
//	sum = num1 + num2;
//	sum = Add(a, b);//函数
//	sum = Add(2,3);
//	printf("%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//下标的形式访问元素
//	//arr[下标]；
//	return 0;
//}
//int main()//算数操作符
//{
//	//int a = 5/2;//除法运算会自动去掉余数
//	int b = 5%2;//取模
//	printf("%d\n", b);
//	return 0;
//}
//int main()//移位操作符
//{
//	
//	//<< 左移
//	//>> 右移
//	//移（2进制）位的操作符
//	int a = 1;
//	//整型1占4个字节-32个bit位
//	//00000000000000000000000000000001
//	int b = a<<2;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	//(2进制)位操作
	//&按位与
	//|按位或
	//^按位异或
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	//001
	printf("%d\n", c);
	return 0;
}