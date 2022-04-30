#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//程序结果
//int main() {
//    FILE* fp;
//    int i, a[6] = { 1, 2, 3, 4, 5, 6 };
//    fp = fopen("d2.dat", "w+");
//    for (i = 0; i < 6; i++) fprintf(fp, "%d\n", a[i]);
//    rewind(fp);
//    for (i = 0; i < 6; i++) fscanf(fp, "%d", &a[5 - i]);
//    fclose(fp);
//    for (i = 0; i < 6; i++) printf("%d,", a[i]);
//    return 0;
//}

//32位平台 -结构体
//#pragma pack(2)
//struct A
//{
//	int a;
//	char b;
//	short c;
//};
//#pragma pack()
//#pragma pack(4)
//struct B
//{
//	char b;
//	int a;
//	short c;
//};
//#pragma pack()
//int main()
//{
//	printf("sizeof(A) = % d, sizeof(B) = % d\n", sizeof(A), sizeof(B));
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    while (i < 10)
//    {
//        if (i < 1)
//            continue;
//        if (i == 5)
//            break;
//        i++;
//    }
//}


//链表中，值为7的表达式
//struct st
//{
//    int n;
//    struct st* next;
//} a[3] = { 5, &a[1], 7, &a[2], 9, NULL }, * p = a;

//定义数组的方式
//int main()
//{
// int arr1[5]
//	int arr(5);--申明一个变量，初始值为5 等价于 int arr= 5;
// 
//	return 0;
//}

//结果
//#define N 4
//
//void fun(int a[][N], int* p) {
//    int i;
//    for (i = 0; i < N; i++) {
//        if (i < 3)
//            p[i] += a[i][i] - a[i][N - i - 2];
//        else
//            p[i] += a[i][i] - a[i][N - i];
//    }
//}
//
//int main() {
    /*int x[N][N] = { {3, 6, 2, 0}, {2, 8, 7, 9}, {5, 1, 7, 3}, {9, 5, 3, 7} },
        y[N] = { 3, 5, 8, 6 }, i;
    fun(x, y);
    for (i = 0; i < N; i++)
        printf("%d ", y[i]);
    printf("\n");
}*/

//结果
//void fun(int* s) {
//    static int j = 0;
//    do {
//        s[j] += s[j + 1];
//    } while (++j < 2);
//}
//int main() {
//    int i, a[10] = { 1, 2, 3, 4, 5 };
//    for (i = 1; i < 3; i++)
//        fun(a);
//    for (i = 1; i < 5; i++)
//        printf("%d", a[i]);
//    printf("\n");
//    return 0;
//}


#include <stdint.h>
#include <stdio.h>
union X {
    int32_t a;
    struct {
        int16_t b;
        int16_t c;
    };
};
int main() {
    X x;
    x.a = 0x20150810;
    printf("%x,%x\n", x.b, x.c);
    return 0;
}
