#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//(2����)λ����
//	//&��λ��
//	//|��λ��
//	//^��λ���
//	/*int a = 3;
//	int b = 5;
//	int c = a & b;*/
//	//011
//	//101
//	//001
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	//011
//	//101
//	//111 - ʮ����λ -- 1*2^2+1*2^1+1*2^0=7
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;//���Ǵη� - �����
//	//����������ɣ�
//	// ��Ӧ�Ķ�����λ��ͬ�� ��Ϊ0
//	// ��Ӧ�Ķ�����λ��ͬ�� ��Ϊ1
//	//011
//	//101
//	//110  - 6
//	printf("%d\n", c);
//	return 0;
//}
//int main()
////��Ŀ������
////˫Ŀ������
////��Ŀ������
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//˫Ŀ������- -����������
//	//c���������Ǳ�ʾ���
//	//0-��
//	//��0 - ��
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//sizeof  ������Ǳ���/������ռ�Ŀռ��С����λ���ֽ�
//	printf("%d\n", sizeof(a) );//4
//	printf("%d\n", sizeof(int) );//4
//	printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);sizeof�Ǳ����� ��int�ģ�������ʡ��
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};//10������Ԫ�ص�����
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz = %d\n", sz);
//	//���������Ԫ�ظ���
//	//���� = ������ܴ�С/ÿ��Ԫ�صĴ�С
//	return 0;
//}
//int main()
//{
//	//�ַ����Ľ�����־����\0��
//	//'\0' - ת���ַ� - 0
//	//��0�� -48(ASCII��ֵ��
//	// 0  --- ����0
//	// 'a' 'b ' 'c' '0' '1' '2'
//	//EOF  - end of file - �ļ�������־
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1 ,num2);
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ��: %d\n", num1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", num2);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1 ,2 ,3, 4 ,5 ,6};//28���ֽ�
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int);//����������д
//	//printf("%d\n", sizeof(arr));//���������С  -- ��λ���ֽ�
//	printf("%d\n", sizeof(arr)/sizeof(arr[0]));
//	return 0;
//}
//int main()
//{
//	int a = 0;//4���ֽڣ� 32��bitλ
//	int b = ~a;//~��λȡ��--������λ
//	//00000000000000000000000000000
//	//11111111111111111111111111111
//    //ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++ �� ��ʹ����++
//	//int b = ++a;//ǰ��++ ���� ��++��ʹ��
//	//int b = a--;//����-- �� ��ʹ����--
//	//int b = --a;//ǰ��--��������--��ʹ��
//	printf("a = %d\n b = %d\n", a ,b);
//	return 0;
//}
