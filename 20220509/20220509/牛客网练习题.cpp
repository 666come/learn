#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1/2=0
//int main()
//{
//	float x = 1 / 2;
//	printf("%f\n", x);
//	return 0;
//}

//int main() {
//    int m = 7, n = 4;
//    float a = 38.4, b = 6.4, x;
//    x = m / 2 + n * a / b + 1 / 2;//3+24+0
//    printf("%f\n", x);
//    return 0;
//}

//½á¹û
void f(int* p)
{ *p = 5; }

int main(void) {
    int a, * p;
    a = 10;
    p = &a;
    f(p);
    printf("%d", (*p)++);
    return 0;
}