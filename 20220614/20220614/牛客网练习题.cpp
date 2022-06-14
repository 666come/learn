#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//输出结果
//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	 printf("%d\n", NUM);
//	return 0;
//}

//输出结果
//float fun(int x, int y) {
//    return (x + y);
//}
//int main() {
//    int a = 2, b = 5, c = 8;
//    printf("%3.0f\n", fun((int)fun(a + c, b), a - c));//3.0意味着小数点后面显示0位
//    return 0;
//}\

int main()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	printf("%d\n", *(arr[1] + 1));//表示arr[1][1]
	printf("%d\n", *(&arr[1] + 1));
	return 0;
}