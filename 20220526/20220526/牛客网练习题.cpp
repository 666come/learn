#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���ɸ�ʽ�����
//int main()
//{
//	int x;
//	float i;
//	scanf("%3d%f", &x, &i);
//	printf("%d %f", x, i);
//	return 0;
//}

//c��c++�ж�������ķ�ʽ��һ����
//int main(void) {
//    int b;
//    int c;
//    int a = b = c = 10;
//    a = b = c = 50;
//    printf("\n % d % d % d", a, b, c);
//}

//������
//int FindSubString(char* pch) {
//    int   count = 0;
//    char* p1 = pch;
//    while (*p1 != '\0') {
//        if (*p1 == p1[1] - 1) {
//            p1++;
//            count++;
//        }
//        else {
//            break;
//        }
//    }
//    int count2 = count;
//    while (*p1 != '\0') {
//        if (*p1 == p1[1] + 1) {
//            p1++;
//            count2--;
//        }
//        else {
//            break;
//        }
//    }
//    if (count2 == 0)
//        return(count);
//    return(0);
//}
//void ModifyString(char* pText) {
//    char* p1 = pText;
//    char* p2 = p1;
//    while (*p1 != '\0') {
//        int count = FindSubString(p1);
//        if (count > 0) {
//            *p2++ = *p1;
//            sprintf(p2, "%i", count);
//            while (*p2 != '\0') {
//                p2++;
//            }
//            p1 += count + count + 1;
//        }
//        else {
//            *p2++ = *p1++;
//        }
//    }
//}
//int main(void) {
//    char text[32] = "XYBCDCBABABA";
//    ModifyString(text);
//    printf("%s\n", text);
//}

//��ȡ�����ַ
//int main()
//{
//	int a[3][5];
//	printf("%p\n", a[2] + 4);
//	printf("%p\n", &a[2][4]);
//	printf("%p\n", *(a + 2) + 4);//��ַƫ�ƣ�
//	printf("%d\n", *(*(a + 2) + 4));//��
//	return 0;
//}

void sub(int x, int y, int* z) {
    *z = y - x;
}
int main() {
    int a, b, c;
    sub(10, 5, &a);
    sub(7, a, &b);
    sub(a, b, &c);
    printf("%d,%d,%d\n", a, b, c);
}