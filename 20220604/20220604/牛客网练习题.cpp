#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ʵ�����ݵĺϷ���
//int main()
//{
//	789.0;
//	123e3;
//	0.123;
//	2.le3.5;
//	return 0;
//}

//������
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

//������
//int x = 5, y = 7;
//void swap() {
//    int z;//��������ȫ�ֱ�����ֵ�����и�ֵ��
//    z = x;
//    x = y;
//    y = z;
//}//�����������main���������ֵ�����޸ģ���Ϊû�д���
//int main(void) {
//    int x = 3, y = 8;
//    swap();//��û�н��д���
//    printf("%d,%d\n",x, y);
//}

//������
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

//������
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