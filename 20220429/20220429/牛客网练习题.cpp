#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//输出结果
//char buffer[6] = { 0 };
//char* mystring() {
//    const char* s = "Hello world";
//    for (int i = 0; i < (sizeof(buffer) - 1); i++) {
//        buffer[i] = *(s + i);
//    }
//    return buffer;
//}
//int main(int args, char** argv) {
//    printf("%s\n", mystring());
//    return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 2;
//	b = 9;
//	a++;
//	c = --b;
//	a += b - c;
//	return 0;
//}


//e后面不可以是小数
//int main()
//{
//	1.2e5;
//	return 0;
//}

//int main()
//{
//    int  i = 1, j = 2, k = 3;
//    if (i++ == 1 && (++j == 3 || k++ == 3))
//        printf("%d  %d  %d\n", i, j, k);
//}


//传参太多时，就会将第一个函数打印
//int main() {
//    int a = 666, b = 888;
//    printf("%d\n", a, b);
//    return 0;
//}

//结果
//#define M(x, y, z) x *y + z
//int main() {
//    int a = 1, b = 2, c = 3;
//    printf("%d\n", M(a + b, b + c, c + a));
//}

//
int fun(int i) {
    int cnt = 0;
    while (i) {
        cnt++;
        i = i & (i - 1);
        //2017 & 2016
        //0111 1110 0001
        //0111 1110 0000
        //0111 1110 0000   --2016
    }
    return cnt;
}

int main() {
    printf("%d\n", fun(2017));
    return 0;
}