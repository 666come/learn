#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;//指针变量
//	printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//char* pc = &a;//有的版本不报错 --&&打印的俩个结果相同
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	int a = 0x11223344;
//	int* pa = &a;//访问4个字节
//	*pa = 0;//地址全变成0
//	char* pc = &a;//访问1个字节
//	*pc = 0;//前俩个地址变成0
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//a的地址加的1是int的字节大小4
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//a的地址加1是char的字节大小1
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素的地址
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		//注意观察内存的变化
//	}
//	return 0;
//}
//int main()
//{
//	//int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//		//当i>10之后就会出现指针越界 --野指针
//	}
//	return 0;
//}
//int* test()
//{
//	
//	static int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	printf("%d\n", *p);
//	
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL --用来初始化指针的，给指针赋值
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	if (pa != NULL)
//	{
//
//	}
//	printf("%d\n", *pa);
//	return 0;
//}
	//int main()
	//{
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int i = 0;
	//	int	sz = sizeof(arr) / sizeof(arr[0]);
	//	int* p = arr;
	//	/*for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", *p);
	//		p = p++;
	//	}*/
	//	for (i = 0; i < 5; i++)
	//	{
	//		printf("%d ", *p);
	//		p+=2;
	//	}
	//	return 0;
	//}
//int  main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", & arr[9] - &arr[0]);
//	&arr[9] - &ch[0];//err
//	//中间元素个数
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen -计数器的方式1，递归的方式2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
  
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址 -首元素地址
//	printf("%p\n", &arr[0]);// -首元素的地址
//	printf("%p\n", &arr);// -整个元素的地址
//	//1.&arr -&数组名- 数组名不是首元素的地址-数组名表示整个数组 - &数组名 取出的是整个数组的地址
//	//2.sizeof(arr) -sizeof(数组名） -数组名表示的是整个数组-sizeof(数组名)计算的是整个数组的的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ======  %p\n", p+i,&arr[i]);
//	}*/
//	return 0;
//}
//指针的地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//	int** * pppa = &ppa;//pppa就是三级指针
//	/*printf("%p\n", &a);
//	printf("%p\n", pa);
//	printf("%p\n", ppa);*/
//	**ppa = 20;
//	printf("%d\n", *pa);
//	printf("%d\n", **ppa);
//	printf("%d\n", ***pppa);
//
//
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整型数组 - 存放数组
	//字符数组 - 存放字符
	//指针数组 - 存放指针
	int arr1[10];
	int* arr2[3]= {&a, & b, & c};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d " ,* (arr2[i]));

	}
	return 0;

}