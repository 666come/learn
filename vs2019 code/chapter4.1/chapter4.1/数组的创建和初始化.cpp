#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//创建一个数组-存放10个整型
//	int arr[10] = {1,2,3};//不完全初始化--剩下的元素默认初始化0
//	char arr2[5] = {'a',98}; //--‘98’对应的ASCII码值就是b
//	char arr3[5] = "ab";//这样的方式也是OK的 -- 存放了三个元素‘a’ 'b' '\0'
//	char arr4[] = "abcdef";// --自动创建7个字符长度
//	printf("%d\n", sizeof(arr4));
//	//sizeof 计算 arr4所占空间的大小
//	//7个元素 -char 7*1 =7
//	printf("%d\n", strlen(arr4));//--strlen计算字符长度  --\0之前的字符个数
//	//[a,b,c,d,e,f,\0]
//	// 6
//	//int n = 5;
//	//char ch[n];//error(应输入常量表达式)
//	/*int count = 10;
//	int arr2[count];*/
//	/*float arr4[1];
//	double arr5[20];*/
//	return 0;
//}

//1.strlen 和 sizeof 没有什么关联
//2.strlen 时求字符串长度的--只能针对字符串求长度 --库函数 -使用得引头文件
//3.sizeof 计算变量、数组、类型的大小 -单位是字节 - 操作符

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值 （没有\0 --字符串结束的标志）
//	return 0;
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i < len; i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//int arr[3][4] = { {1,2,3},{4,5} };//3行4列
//	//char arr[3][5];//3行5列
//	//double arr[2][4];//2行4列
//	int arr[][4] = { {1,2,3,4},{5,6,7,8} };//行可以省略 但列不能省略
//	return 0;
//}
// 打印二维数组
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//打印二维数组的地址
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i,j, &arr[i][j]);
//
//		}
//		
//	}
//	return 0;
//}

//冒泡排序
//void bubble_sort(int arr[] ,int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参  --实际上传递过去的是arr首元素的地址 &arr[0]
//	
//
//	return 0;
//}
 
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(数组名)  --数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址

	printf("%p\n", arr);  //首元素的地址
	printf("%p\n", &arr[0]);  //首元素的地址
	printf("%d\n", *arr);  //整个元素的地址
	return 0;
}