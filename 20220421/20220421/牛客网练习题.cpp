#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������
//int main() {
//    char* ptr;
//    char arr[] = "12345678";
//    ptr = arr;
//    ptr += 5; //�����ַ+5
//    printf("%s", ptr);
//    return 0;
//}//��ӡ���Ϊ�±�Ϊ5��֮���Ԫ��


//������
//void fun(char* p, int n) {
//    char b[6] = "abcde";
//    int i;
//    for (i = 0, p = b; i < n; i++)
//        p[i] = b[i];
//}
//
//int main() {
//    char a[6] = "ABCDE";
//    fun(a, 5);
//    printf("%s\n", a);
//}//���������Σ������ڲ����¶���




//int convert(int i) {
//    //7
//    //00000000000000000000000000000111 -ԭ�� ���� ����
//    
//    return i| 1<<31;  //___________________   -������ʽ��ʹ�ý��Ϊ8000 0007
//    //10000000000000000000000000000000  --8000 0000
//    // |1<<31 --��λ�� 
//    //10000000000000000000000000000111  --8000 0007
//}

//����
//int convert(int i)
//{
//    return i ^ 1 << 31;
//    //1<<31  -- 1000000000000000000000000000000 
//    //i^1<<31 - 0000000000000000000000000000111
//           //-- 1000000000000000000000000000111 --8000 0007
//}
//int main() {
//    int value = 7;
//    printf("%x\n", convert(value));
//    return 0;
//}


//�������������Ľ��
//#include<stdlib.h>
//int main() {
//	int max = 1;
//	int i = 11, j = 13, k = 5;
//	max = i > j ? i > k ? i : k : j > k ? j : k;
//	printf("max = %d\n", max);
//	return 0;
//}
//���ж� j > k ? j : k 
//���ж� i > k ? i : k 
//����ٵ� i > j ? i > k
//����������� i > j ? (i > k ? i : k) : (j > k ? j : k);


//���ַ�������ȷ����
//int main()
//{
//
//	char str[4][12] = { "aaa", "bbbb", "ccccc", "dddddd" };
//	char* strp[4];
//	printf("%s\n ", *strp[3]);
//	return 0;
//}

//ָ�븳ֵ
//int main()
//{
//	int a = 3;
//	int* p = &a;
//	printf("%p\n", p);
//	return 0;
//}

//ִ�н��
//int main() {
//    int x;
//    scanf("%d", &x);
//    if (x-- < 5)
//        printf("%d", x);
//    else
//        printf("%d", x++);
//    return 0;
//}


//һά����Ԫ�صĴ�ӡ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ", i);
//	}
//	
//	return 0;
//}