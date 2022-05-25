#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//C语言标识符
//int main()
//{
//	int D56;
//	int r_1_2;
//	int name;
//	int _st_1;
//	int sum;
//	int average;
//	int S.b;//不可以出现 .
//	return 0;
//}

//输出结果
//int fun( char* s)
//{
//    char* p = s;
//    while (*p != '\0') p++;
//    return (p - s);
//}
//int main()
//{
//    const char* p = "goodbye!";
//    printf("%d\n", fun(p));//编译器不支持
//}

//x=2014,输出结果
//int fun(unsigned int x) {
//    int n = 0;
//    while (x + 1) {
//        n++;
//        x = x | (x + 1);//统计0的个数
//        
//    }
//    return n;
//}
//int main()
//{
//    printf("%d\n", fun(2014));
//    return 0;
//}

//输出结果
//void incre();
//int x = 3;
//
//int main() {
//    int i;
//    for (i = 1; i < x; i++)
//        incre();
//}
//void incre() {
//    static int x = 1;
//    x *= x + 1;//26
//    printf("%d", x);
//}

//输出结果
void main(void) {
    double x = 28;
    int r;
    r = (int)x % 5;//注意x需要强制类型转换
    printf("r=%d\n", r);
}   