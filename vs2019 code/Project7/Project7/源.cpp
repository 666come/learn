#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#define MAX 100 //#define����ı�ʶ������
//#define �����Զ����  - ������

//������ʵ��
//int Max(int x , int y)
//{
//	if(x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ��巽ʽ
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	 max = MAX(a,b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//	}
//int main()
//{
//	int a = 10;//4���ֽ�
//	int * p = &a; //ȡ��ַ
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;
//	printf("a = %d\n", a);
//	//* -- �����ò�����
//	//��һ�ֱ�����������ŵ�ַ�� - ָ�����
//	//printf("%d\n", &a);//ȡa�ĵ�ַ
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char *)); //- 4
//	printf("%d\n", sizeof(short *));// -4 
//	printf("%d\n", sizeof(int *)); // -4
//	printf("%d\n", sizeof(double *));//-4
//
//	return 0;
//}
int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	return 0;
}
//int main()
//{
//	//int a = 10;//������4���ֽڵĿռ�
//	////printf("%p\n", &a);//a�ĵ�ַ
//	//int* p = &a;
//	////printf("%p\n", p);//p��һ������ - ָ�����
//	//*p =20;//�����ò�����/��ӷ��ʲ�����
//	//printf("a = %d\n", a);
//	/*double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));*/
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//	return 0;
//}