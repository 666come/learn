#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//switch语句
//int main()
//{
//	int i = 2;
//	switch (i)
//	{
//	case 1: i++;
//	case 2: i--;
//	case 3: ++i; break;
//	case 4: --i;
//	default: i++;
//	}
//	return 0;
//}

//C++
//int main()
//{
//	char array[12] = { 0x01 , 0x02 , 0x03 , 0x04 , 0x05 , 0x06 , 0x07 , 0x08 };
//	short* pshort = (short*)array;
//	int* pint = (int*)array;
//	int64* pint64 = (int64*)array;
//	printf("0x%x , 0x%x , 0x%llx , 0x%llx", *pshort, *(pshort + 2), *pint64, *(pint + 2));
//
//	return 0;
//}

//输出结果
//int main() {
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d, %d", *(a + 1), *(ptr - 1));
//    return 0;
//}

//输出结果
//#include<string.h>
//int main() {
//    char c, s[20];
//    strcpy(s, "Hello,World");
//    printf("s[]=%6.9s\n", s);//6表示6位对齐，不够用空格补，.9表示显示9位
//    return 0;
//}


//输出结果
//int main() {
//    int i = 1;
//    sizeof(i++);//注意，sizeof里面的内容是不参与运算的
//    printf("%d\n", i);
//    return 0;
//}

//输出结果
//int main() {
//    int sum = 0;
//    int i = 0, j = 0;
//
//    for (j = 0; j < 6; j++) {
//        if (j % 2) continue;
//        sum++;//0 2 4 
//    }
//
//    printf("sum = %d", sum);
//
//    return 0;
//}

//int main()
//{
//	int a[3];
//	a[0] = 0;
//	a[1] = 1;
//	a[2] = 2;
//	int* p, * q;
//	p = a;
//	q = &a[2];
//	printf("%d\n", a[q - p]);
//	return 0;
//}

#define  SUM(x) 3*x*x+1
int main() {
    int i = 5, j = 8;
    printf("%d\n", SUM(i + j));//3*5+8*5+8+1 = 15+40+9=64
    return 0;
}