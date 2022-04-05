#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//算术操作符 + - * / %
//int main()
//{
//	double a = 5 % 2;//商2余1
//	printf("a = %lf\n", a);
//	return 0;
//}

////移位操作符
//int main()
//{
//	int a = -16;
//	//>>  --右移操作符
//	//移动的是二进制位
//	//10000000000000000000000000010000 - 原码
//	//11111111111111111111111111101111 - 反码
//	//11111111111111111111111111110000 - 补码
//	//右移一位
//	//11111111111111111111111111111000 - 输出结果为-8
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	//整数的二进制位的表示有：原码、反码、补码
//	//存储到内存的是补码
//	//10000000000000000000000000000001； - 原码
//	//11111111111111111111111111111110； - 反码（符号位不变其他位按位取反）
//	//11111111111111111111111111111111;  - 补码（反码+1）
//	//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//左移操作符
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = -5;
//	int b = a << 1;
//	//10000000000000000000000000000101 -原码
//	//11111111111111111111111111111010 -反码
//	//11111111111111111111111111111011 -补码
//	//左移一位
//	//11111111111111111111111111110110 -输出结果为-10
//
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	//& - 按2进制位与
//	int a = -3;
//	int b = 5;
//	int c = a & b;
//	//10000000000000000000000000000011 -原码
//	//11111111111111111111111111111100 -反码
//	//11111111111111111111111111111101 -补码
//	 
//	
//	//对比（负数的补码和正数的原码进行按位与）
//	//11111111111111111111111111111101 -补码
//	//00000000000000000000000000000101 -原码
//	//结果为
//	//00000000000000000000000000000101 结果为5
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;
//	printf("%d\n", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	//
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*int tmp = 0;*///1.临时变量
//	printf("before: a =%d b=%d\n",a,b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	//2.加减法  --可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//3.异或操作符
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after : a =%d b=%d\n", a, b);
//	return 0;
//}
//练习：
//编写代码实现：求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//3 --011
//	int count = 0;
//	//统计num的补码中有几个1？
//	while (num != 0)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//			num = num / 2;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);//-1
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
	//32bit
	//00000000000000000000000000000011
	//00000000000000000000000000000001
	//00000000000000000000000000000000
	//num&1 ==1
	//统计num的补码中有几个1？
	
//int main()
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	a = x = y + 1;//连续赋值
//	printf("%d %d\n", a,x);
//	return 0;
//}							

//int main()
//{
//	int a = 10;
//	a = a + 2;//普通写法
//	a += 2;//复合赋值符
//	a = a >> 1;
//	a >>= 1;
//	return 0;
//}

//单目操作符 --只有一个操作数
//int main()
//{
//	int a = 80;
//	if (!a)
//	{
//		printf("呵呵\n");
//	}
//	else if (a)
//	{
//		printf("哈哈\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p= &a;//取地址操作符
//	*p = 20;//解引用操作符
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	//sizeof 计算的变量所占内存呢空间的大小，单位是字节
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//
//	printf("%d\n", sizeof(c));//1
//	printf("%d\n", sizeof(char));//1
//
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(char*));//4
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int[10]));//40
//
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));//2
//	printf("%d\n", s);//0
//	return 0;
//
//}

//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);//15
//	printf("%d\n", a);
//	a = a & (~(1 << 2));//11
	//000000000000000000000000000001011
	//000000000000000000000000000000100
	//000000000000000000000000000001111
	/*int a = 0;*/
	// ~按（二进制位）取反
	//000000000000000000000000000000000000
	//111111111111111111111111111111111111 -补码
	//111111111111111111111111111111111110 -反码
	//100000000000000000000000000000000001 -原码
	//-1
	/*printf("%d\n", ~a);*/

//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//先++再使用
//	printf(" a= %d\n", a++);
//	printf(" a= %d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//int a =int(3.14);//err
//
//	return 0;
//}

//数组传参 --传过去的是首元素地址 --地址用指针接受--32位平台（4byte）64位平台（8byte）
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = a | b;
//	//001
//	//010
//	//011  --3
//	int d = a & b;
//	//001
//	//010
//	//000
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//0&& 后面的都没有运算
//	//i = a++||++b||d++;
//	printf("a =%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//1 2 3 4
//
//	return 0;
//
//}
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//0&& 后面的都没有运算
//	//i = a++||++b||d++;
//	printf("a =%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	//2 3 3 5
//
//	return 0;
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//算到b后面就没有运算了
//	printf("a =%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	//1 3 3 4
//
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;//||后面就没有运算了 --因为a是真，所以后面无论任何数都是真
//	printf("a =%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	//1 3 3 4
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	/*a > 5 ? b = 3: b = -3;*/
//	b = (a > 5 ? 3 : -3);
//	//if (a > 5)
//	//b = 3;
//	//else
//	//b = -3;
//
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{   //求出a b的较大值
//	int a = 10;
//	int b = 20;
//	int c = a > b ? a : b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;//[]有俩个操作数
//	1 + 2;
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	//调用函数的时候的（）就是函数调用操作符
//	printf("max = %d\n",max);
//	return 0;
//}

//学生
//int float
//创建一个结构体类型 -struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//
//};
//int main()
//{
//	int a = 0;
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",18,"1391929339" };
//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//结构体指针->成员名
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//
//	/*printf("姓名：%s\n", s1.name);
//	printf("年龄：%d\n", s1.age);
//	printf("ID:   %s\n", s1.id);*/
//	//结构体便变量.成员名
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//截断 --00000011  -a
//	//
//	char b = 127;
//	//00000000000000000000000001111111
//	//截断  --01111111
//
//	char c = a + b;
//	//a和b如何相加  --整型提升
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//
//	printf("%d\n", c);
//	//10000010 - c
//	//11111111111111111111111110000010  -补码
//	//11111111111111111111111110000001  -反码
//	//10000000000000000000000001111110  -原码
//	return 0;
//}

//实例1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(-c));//4
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = a + --a;
//	printf("%d\n", a);
//	return 0;
//}

int fun()
{
    static int count = 1;
	return ++count;
}
int main()
{
	int answer;
	answer = fun() - fun() * fun();
	printf("%d\n", answer);
	return 0;
}