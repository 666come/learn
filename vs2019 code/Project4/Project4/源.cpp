#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	//printf("%c\n", '\132');//��\��������ֱ�ʾ����8���ƵĲ�������8����
//	//\32 --32��2��8���Ƶ�����
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32  -- > 10���� 26 ->��ΪASCII��ֵ������ַ�
//	printf("%c\n", '\x61');
//	return 0;
//}	
//int main()
//{
//	printf("%c\n", '\x61');//'\x' ��������ֱ�ʾ16��������
//	return 0;
//}
//int main()//�ж����
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);//1\0
//	if (input == 1)
//		printf("��offer");
//	else
//		printf("������\n");
//	return 0;
//}
//int main()//ѭ�����
//{
//	int line = 0;
//	printf("�������\n");
//	while (line<20000)
//	{
//		printf("��һ�д���: %d\n", line);
//		line++;
//	}
//	if(line>=20000)
//	printf("��offer\n");
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = a + b;
//	sum = num1 + num2;
//	sum = Add(a, b);//����
//	sum = Add(2,3);
//	printf("%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ�����
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//�±����ʽ����Ԫ��
//	//arr[�±�]��
//	return 0;
//}
//int main()//����������
//{
//	//int a = 5/2;//����������Զ�ȥ������
//	int b = 5%2;//ȡģ
//	printf("%d\n", b);
//	return 0;
//}
//int main()//��λ������
//{
//	
//	//<< ����
//	//>> ����
//	//�ƣ�2���ƣ�λ�Ĳ�����
//	int a = 1;
//	//����1ռ4���ֽ�-32��bitλ
//	//00000000000000000000000000000001
//	int b = a<<2;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	//(2����)λ����
	//&��λ��
	//|��λ��
	//^��λ���
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	//001
	printf("%d\n", c);
	return 0;
}