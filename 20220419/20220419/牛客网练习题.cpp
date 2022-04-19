#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"stdlib.h"


//二维数组的打印
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[][3] = { 1,2,3,4,5,6,7 };//--第一个不确定时就用数组元素个数除以列+1（7/3=2 +1 =3）
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	 }
//	return 0;
//}//{1，2，3} {4，5，6} {7，8，9}


//代码执行结果
//int main() {
//	printf("\n");
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* p = a; 
//	int** k = &p;//k存放的是p指针的地址
//	printf("%d", *(p++));//输出数组的第一个元素
//	printf("%d", **k);//输出数组的第二个元素
//	return (0);
//}

//strcpy函数的使用
//#include<string.h>
//int main()
//{
//	char s1[] = "12345";
//	const char* s2 = "1234";
//	printf("%d\n", strlen(strcpy(s1, s2)));
//	
//	return 0;
//}

//调用fun()函数，求数组的最大值和下标
//void fun(int* s, int n, int* k) {
//    int i;
//    for (i = 0, *k = i; i < n; i++)
//        if (s[i] > s[*k])
//           * k=i;//填空题
//}
//
//int main() {
//    int a[5] = { 1, 6, 2, 8, 0 }, k;
//    fun(a, 5, &k);
//    printf("%d %d＼n", k, a[k]);
//}

//int main() {
//    int a[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {11, 12, 13, 14}, {15, 16, 17, 18} };
//    int i = 0, j = 0, s = 0;
//    while (i++ < 4) {//执行了2次，分别是i=1和i=3（下标），对应的就是第二行和第四行的元素
//        if (i == 2 || i == 4) continue;//continue 直接结束本次循环
//        j = 0;//j每次都初始化
//        do {
//            s += a[i][j];//s每次都被重新赋值
//            j++;
//        } while (j < 4);
//
//    }
//    printf("%d\n", s);//s=92
//    return 0;
//}

int main()
{
	int a[10] = { 11,21,31,41,51,61,71,81,91,101 };
	int* p = a;
	printf("%d\n", *p);
	return 0;
}