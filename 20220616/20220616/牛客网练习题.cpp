#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char h;
//	char* s = &h;
//	*s = 'H';
//	1.2134e0.4;//�Ǵ����
//	return 0;
//}

//������
//#include "string.h"
//void fun(char* s) {
//    char t[7];
//    s = t;
//    strcpy(s, "example");
//}
//
//int  main() {
//    char* s= 0;
//    fun(s);
//    printf("%s", s);
//    return 0;
//}

//���쾲̬����
//int x = 4;
//void incre() {
//    static int x = 1;
//    x *= x + 1;
//    printf("%d", x);
//}
//int main() {
//    int i;
//    for (i = 1; i < x; i++) {
//        incre();
//    }
//    return 0;
//}

//������
int main() {
    int i;
    i = 0x10 + 010 + 10;
    printf("x = %x", i);
}//0x22