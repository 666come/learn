#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
//int main()
//{
//	//1-10
//	int i = 1;
//	do 
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}
////��ϰ��1.����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}
////��ϰ��2.����1!+2!+...+10!�ĺ�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	//ret = 1*1 =1
//	//ret = 1*1*2 = 2
//	//ret =	1*1*2*3 = 6
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}
//��ϰ��2.����1!+2!+...+10!�ĺ�
//int main()//�����Ż�
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//��ϰ3. ��һ�����������в��Ҿ����ĳ������n����д int binsearch(int x ,int v[], int n);���ܣ�
//��v[0]<=v[1]<=v[2]...<=v[n-1]�������в���x.
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ��� \n");
//	return 0;
//}
//��ϰ�������Ż�
//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

////��ϰ�ģ���д���룬��ʾ����ַ��������ƶ������м��ۡ�
//    //welcome to bit!!!!!!
//	//####################
//	//w##################��
//	//we################!!
//	//wel##############!!!
//	//...
//	//welcome to bit!!!!!!  --�ô���ʵ��
//int main()
//{
//	//char arr[]= "abc";
//	//[a b c \0]
//	// 0 1 2  3
//	//4-2
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ�룻
//		Sleep(1000);//��λ����
//		system("cls");//ִ��ϵͳ�����һ������ -cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����
int main()
{
	int  i = 0;
	char password[20] = { 0 };
	for(i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if(strcmp (password,  "123456") == 0)// == ���������ж������ַ�����ͬ��Ӧ���ÿ⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
			break;
	    }
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("�����������������˳�����\n");
	return 0;
}