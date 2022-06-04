#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//实型数据的合法性
//int main()
//{
//	789.0;
//	123e3;
//	0.123;
//	2.le3.5;
//	return 0;
//}

//输出结果
//#include<string.h>
//#include<stdlib.h>
//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf("%s", str);
//}
//int main()
//{
//    Test();
//    return 0;
//}

//输出结果
//int x = 5, y = 7;
//void swap() {
//    int z;//都是利用全局变量的值，进行赋值的
//    z = x;
//    x = y;
//    y = z;
//}//结束并不会对main函数里面的值进行修改，因为没有传参
//int main(void) {
//    int x = 3, y = 8;
//    swap();//并没有进行传参
//    printf("%d,%d\n",x, y);
//}

//输出结果
//int main() {
//	int a[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {11, 12, 13, 14}, {15, 16, 17, 18} };
//	int i = 0, j = 0, s = 0;
//	while (i++ < 4) {
//		if (i == 2 || i == 4) continue;
//		j = 0;
//		do {
//			s += a[i][j];
//			j++;
//		} while (j < 4);
//
//	}
//	printf("%d\n", s);
//	return 0;
//}

//输出结果
//int main()
//{
//    int x, y;
//    scanf("%2d%*4s%2d", &x, &y);
//    printf("%d", y - x);
//    return 0;
//}

#include<stdio.h>
int main() {
    unsigned char i = 7;
    int j = 0;
    for (; i > 0; i -= 3) {
        ++j;
    }
    printf("%d\n", j);
    return 0;
}