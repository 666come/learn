#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
	//char ch = 'A';//�ڴ�
	//printf("%c\n", ch);//%c -- ��ӡ�ַ���ʽ������
	//float f = 20.5;
	//%d - ��ӡ����
	//%c - ��ӡ�ַ�
	//%f - ��ӡ��������
	//%p - �Ե�ַ����ʽ��ӡ
	//%x - ��ӡ16��������
	//%o ...
	//short ��int��(������)
	//long ��int��(�����ͣ�
	//printf("%f\n", f);
	//double d = 3.14;
	//printf("%lf\n", d);
	//printf("%d\n", sizeof(char));//1�ֽ� 8bit
	//printf("%d\n", sizeof(short));//2�ֽ�
	//printf("%d\n", sizeof(int));//4�ֽ�
	//printf("%d\n", sizeof(long));//4�ֽ�
	//printf("%d\n", sizeof(long long));//8�ֽ�
	//printf("%d\n", sizeof(float));//4�ֽ�
	//printf("%d\n", sizeof(double));//8�ֽ�
	//short age = 20;//���ڴ�����2���ַ�=15bitλ���������20
	//float weight = 95.6f;
	//return 0;
//int num2 = 20;//ȫ�ֱ���-�����ڴ����{}����ı���
//int main()
//{
//	int num1 = 10;//�ֲ�����-�����ڴ����{}����ı���
//	return 0;
//
//int a = 100;
//int main()
//{
//	//int a = 10;//�ֲ�������ȫ�ֱ�����������ò�Ҫһ��-������ᣬ����bug
//	//���ֲ�������ȫ�ֱ���ͬʱ���ֵ�ʱ����������ֲ�����
//	printf("%d\n", a);
//	return 0;
//
//int main()
//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��
//	scanf("%d%d", &num1, &num2 );//ȡ��ַ����&
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	{//������
//		
//		printf("num = %d\n", num);
//	}
//	return 0;
//}
//int global = 2020;
//void test()
//{
//	printf("test()--%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n" , global);
//	return 0;
int main()
{   
	//δ�����ı�ʶ��
	//����extern�ⲿ���ŵ�
	extern int g_val;
	printf(" g_val = %d\n", g_val);
	return 0;
}