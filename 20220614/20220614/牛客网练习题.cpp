#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������
//#define N 2
//#define M N + 1
//#define NUM (M + 1) * M / 2
//int main()
//{
//	 printf("%d\n", NUM);
//	return 0;
//}

//������
//float fun(int x, int y) {
//    return (x + y);
//}
//int main() {
//    int a = 2, b = 5, c = 8;
//    printf("%3.0f\n", fun((int)fun(a + c, b), a - c));//3.0��ζ��С���������ʾ0λ
//    return 0;
//}\

int main()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	printf("%d\n", *(arr[1] + 1));//��ʾarr[1][1]
	printf("%d\n", *(&arr[1] + 1));
	return 0;
}