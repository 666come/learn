#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//���ʽ�Ƿ���ȷ
//int main()
//{
//	int a = 20;
//	if (10 < a < 15)
//		printf("%d\n", a);
//	return 0;
//}//������̫�����ˣ���������˵�Ǵ���ġ���Ϊ��ϵ�������ķ���ֵ��0��1�����Խ����1�Ŷԡ�

//������
//#include<stdlib.h>
//int  main()
//{
//	int a = -3;
//	unsigned int b = 2;
//	long c = a + b;
//	printf("%ld\n", c);
//}

//int main()
//{
//	const char* const name = " Chen ";
//
//	return 0;
//}

//32λϵͳ�µĴ�ӡ���
//int main() {
//    char str[] = { "hello world" };
//    printf("%s", str);
//    return 0;
//}

//��������ȼ�
//int main()
//{
//	int a = 7, b = 9, t;
//	t = a *= a > b ? a : b;//������������ȼ���һ��
//	printf("%d", t);
//	return 0;
//}

const char* a[] = { "BEIJING", "SHENZHEN", "SHANGHAI", "GUANGZHOU" };
const char** pa[] = { a + 3, a + 2, a + 1, a };
const char*** ppa = pa;
int main(void) {
    printf("%s, ", **++ppa);
    printf("%s, ", *-- * ++ppa + 3);
    printf("%s, ", *ppa[-2] + 3);
    printf("%s", ppa[-1][-1] + 1);
}