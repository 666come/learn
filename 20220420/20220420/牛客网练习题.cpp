#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//赋值语句的使用
//int main()
//{
//
//	/*int a / b = 2;*/赋值语句的等号左边应该是变量，不能是表达式。
//	/*int e = e < e + 1;*/
//	int b;
//	int c;
//	int d;
//	int a = (b = (c = 2, d = 3));
// 逗号语句是以最后一条为返回值的，语句等价于''c=2;a=b=d=3;"，即"c=2;d=3;b=d;a=b;"是正确的
//	printf("%d ",  a);
//	return 0;
//}//a =3

//int*型的指针p存放的是i的地址
//int main()
//{
//	int i =3;
//	int* p = &i;
//	return 0;
//}

//字符串长度
//int main()
//{
//	char str[] = { "string!" };//长度为8   
//  需要注意的是数组里需要开辟8+1个字节，需要去存放\0
//	/*char str[] = "string!";*///长度为8
//	int sz = (sizeof str / sizeof str[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}

//求和函数
//int fun(int i = 1, int j = 2) 
//{
//	return (i + j);//没有返回值接收
//}
//int main()
//{
//	fun(3);//又返回来了
//	printf("%d\n", fun());
//	return 0;
//}

//static的用法：
//int fun(int x) {
//    static int a = 3;//static产生的值不会被销毁，同时也不用运行，是函数内的全局变量
//
//    x += a++;
//    return x;
//}
//void main() {
//    int x = 2, sum;
//    sum = fun(x);
//    sum = sum + fun(x);
//    printf("%d\n", sum);
//}

//for循环中的continue的用法
//int main()
//{
//    int a, b;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 10)
//            break;
//        if (b % 3 == 1)
//        {
//            b += 3;
//            continue;
//        }
//    }
//    printf("%d\n", a);
//    return 0;
//}

//C++程序 --字符运算是用ASCII码运算的
//int main()
//{
//    char ch = 'A';
//    while (ch < 'D')
//    {
//        printf("%d", ch - 'A');
//        ch++;
//    }
//    printf("\n");
//}

//指针数组
int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int * p = a;//p存放的是数组的元素
	
	printf("%d\n", p[5]);
	
	return 0;
}