#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int b;
//	const int* a = &b;          // 1 -ָ��aָ��̬int
//	//const* int a = &b;         // 2 - C���벻��
//	const int* const a = &b;    // 3 -��ָ̬�룬ָ��̬int 
//	int const* const a = &b;    // 4 -��ָ̬�룬ָ��̬���������������int��
//	return 0;
//}


//������
//int main() {
//    int i, j, k, a = 3, b = 2;
//    i = (--a == b++) ? --a : ++b;//a=2;b=3;i = a=1
//    j = a++;//j=1,a=2
//    k = b;//k=3
//    printf("i=%d,j=%d,k=%d\n", i, j, k);
//    return 0;
//}


//nΪ5
int foo(int n) {
	if (n < 2) {
		return n;
	}
	else
		return 2 * foo(n - 1) + foo(n - 2);
}
int main()
{
	
	printf("%d\n", foo(5));
	return 0;
}