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
////练习：1.计算n的阶乘
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
////练习：2.计算1!+2!+...+10!的和
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
//		//n的阶乘
//		sum = sum + ret;
//	}
//	//ret = 1*1 =1
//	//ret = 1*1*2 = 2
//	//ret =	1*1*2*3 = 6
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}
//练习：2.计算1!+2!+...+10!的和
//int main()//代码优化
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//
//		//n的阶乘
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//练习3. 在一个有序数组中查找具体的某个数字n。编写 int binsearch(int x ,int v[], int n);功能：
//在v[0]<=v[1]<=v[2]...<=v[n-1]的数组中查找x.
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到 \n");
//	return 0;
//}
//练习三代码优化
//int main()
//{
//	
//	int arr[] = { 1,2,3,4,5,6,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}

////练习四：编写代码，演示多个字符从两端移动，像中间汇聚。
//    //welcome to bit!!!!!!
//	//####################
//	//w##################！
//	//we################!!
//	//wel##############!!!
//	//...
//	//welcome to bit!!!!!!  --用代码实现
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
//		//休息一秒；
//		Sleep(1000);//单位毫秒
//		system("cls");//执行系统命令的一个函数 -cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。
int main()
{
	int  i = 0;
	char password[20] = { 0 };
	for(i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if(strcmp (password,  "123456") == 0)// == 不能用来判断两个字符串相同，应该用库函数-strcmp
		{
			printf("登录成功\n");
			break;
	    }
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均输入错误，退出程序\n");
	return 0;
}