#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	//strlen  --���ַ����ĳ���
//	return 0;
//}
#include<string.h>
//int main() //--strcpy��ʹ�÷���
//{    
//	//strcpy  -- string copy  -  �ַ�������
//	//strlen  -- string length - �ַ��������й�
//	char arr1[] = "bit";
//	char arr2[20] = "#############";
//	//               bit\0########
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//memset
//memory  - �ڴ�  set -����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

////���庯��
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//������ʹ��
//	int max =get_max(a, b);
//	printf("max= %d\n", max);
//	max = get_max(100, 300);
//	printf("max = %d\n", max);
//	return 0;
//}

//ʹ��������ֵ�Ե�
//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
// ���βε��޸��ǲ���ı�ʵ�ε� 
//void Swap1(int x, int y) //void --����� -��û�з���ֵ
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////Swap1�����������
//void Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int tmp = 0;*/
//	//������������д��
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	/*Swap1(a, b);*/ --��ֵ����
//	Swap2(&a, &b);  --��ֵ����
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}

//�β� -��ʽ���� -��ʽ�ϵĲ���

//����������1 ������������0
//#include<math.h>
// int is_prime(int n)
//{
//	 //2->n-1
//	 int j = 0;
//	 for (j = 2; j <= sqrt(n); j++)
//	 {
//		 if (n % j == 0)
//			 return 0;
//
//	 }
//	 return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (1; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

//2.дһ�������ж�һ���ǲ�������
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for(year=1000;year<=2000;year++)
//	{
//		//�ж�year�Ƿ�������
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//3. дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
//               ������arr��һ��ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨ʵ��
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	return -1;
//}
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷��أ���������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7; 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                     ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//
//	}
//	
//	return 0;
//}

//4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1��
//void Add(int* p)
//{
//	(*p)++;//++�����ȼ��ȽϿ�ǰ������Ҫ��*p�ã�������
//}
//int main()
//{
//	int num =0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//
//	return 0;
//}

//int main()  --��ʽ����
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//���ȴ�ӡ43  Ȼ����Ϊ��ӡ��2���ַ������Լ�����ӡ2��
//	//Ȼ����Ϊ��ӡ����2��һ���ַ������Լ�����ӡ1. --��ӡ����
//	return 0;
//}

#include"Դ1.cpp"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
