#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;//double -->int//�����ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//�� - �� 0 
//	//�� -  0 
//	//&& -- �߼���
//	int a = 3;
//	int b = 0;
//	//int c = a && b;//�߼��� -- һ��Ϊ��
//	int  c = a || b; //�߼��� --  һ�涼��
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//--�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()---�������ò�����
//	printf("%d\n", sum);
//	return 0;
//}
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//���� -- ԭ�룬 ���룬 ����  ��ͬ
//���� -- >
//         ��ԭ�룩ֱ�Ӱ�������д���Ķ���������
         //�����룩ԭ��ķ���λ���䣬����λ��λȡ���õ���
//         �����룩����+1
//���ӣ�
//-2
//1000000000000000000000000000010  - ԭ��
//1111111111111111111111111111101  - ����
//1111111111111111111111111111110  - ����
//int main()
//{
//    /*register int a = 10;*///�����a����ɼĴ���������
//    //typedef  - ���Ͷ���/�����ض���
//    //����  -- С��  -- ������С��
//    typedef unsigned int u_int;
//    unsigned int num = 20;
//    u_int num2 = 20;
//    return 0;
//}
//void test()
//{
//    //1.static���ξֲ�����
//    //�ֲ��������������ڱ䳤��
//   static int a = 1;//��һ����̬�ľֲ�����
//   a++;
//   printf("a= %d\n", a);//2 3 4 5 6
//}
//int main()
//{
//    int i = 0;
//    while (i < 5)
//    {
//        test();
//        i++;
//    }
//    return 0;
//}
//int main()//2.static����ȫ�ֱ���
////�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
////����Դ�ļ���û����ʹ����
//{
//    //extern  --  �����ⲿ���ŵ�
//    extern int g_val;
//    printf("g_val = %d\n", g_val);
//    return 0;
//}

//�����ⲿ����
extern int Add(int , int);
int main()
//3.static���κ���
//Ҳ�Ǹı��˺����������� - ��׼ȷ
//static���κ����ı��˺������������ԣ�
//�ⲿ�������� -- -�ڲ���������
//
{
    int a = 10;
    int b = 20;
    int sum = Add(a, b);
    printf("sum = %d\n", sum);
    return 0;
    }