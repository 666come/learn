#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//��ֵ����ʹ��
//int main()
//{
//
//	/*int a / b = 2;*/��ֵ���ĵȺ����Ӧ���Ǳ����������Ǳ��ʽ��
//	/*int e = e < e + 1;*/
//	int b;
//	int c;
//	int d;
//	int a = (b = (c = 2, d = 3));
// ��������������һ��Ϊ����ֵ�ģ����ȼ���''c=2;a=b=d=3;"����"c=2;d=3;b=d;a=b;"����ȷ��
//	printf("%d ",  a);
//	return 0;
//}//a =3

//int*�͵�ָ��p��ŵ���i�ĵ�ַ
//int main()
//{
//	int i =3;
//	int* p = &i;
//	return 0;
//}

//�ַ�������
//int main()
//{
//	char str[] = { "string!" };//����Ϊ8   
//  ��Ҫע�������������Ҫ����8+1���ֽڣ���Ҫȥ���\0
//	/*char str[] = "string!";*///����Ϊ8
//	int sz = (sizeof str / sizeof str[0]);
//	printf("%d\n", sz);
//
//	return 0;
//}

//��ͺ���
//int fun(int i = 1, int j = 2) 
//{
//	return (i + j);//û�з���ֵ����
//}
//int main()
//{
//	fun(3);//�ַ�������
//	printf("%d\n", fun());
//	return 0;
//}

//static���÷���
//int fun(int x) {
//    static int a = 3;//static������ֵ���ᱻ���٣�ͬʱҲ�������У��Ǻ����ڵ�ȫ�ֱ���
//
//    x += a++;
//    return x;
//}
//void main() {
//    int x = 2, sum;
//    sum = fun(x);
//    sum = sum + fun(x);
//    printf("%d\n", sum);
//}

//forѭ���е�continue���÷�
//int main()
//{
//    int a, b;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 10)
//            break;
//        if (b % 3 == 1)
//        {
//            b += 3;
//            continue;
//        }
//    }
//    printf("%d\n", a);
//    return 0;
//}

//C++���� --�ַ���������ASCII�������
//int main()
//{
//    char ch = 'A';
//    while (ch < 'D')
//    {
//        printf("%d", ch - 'A');
//        ch++;
//    }
//    printf("\n");
//}

//ָ������
int main()
{
	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int * p = a;//p��ŵ��������Ԫ��
	
	printf("%d\n", p[5]);
	
	return 0;
}