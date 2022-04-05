#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//3
//	switch (day)
	//{
	/*case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期天\n");
		break;*/
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("工作日\n");
	//	break;
	//case 6:
	//	printf("休息日\n");
	//	break;
	//case 7:
	//	printf("休息日\n");
	//	break;
	//default:
	//	printf("输入错误\n");
	//	break;
	//}
	//return 0;
//}
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch允许嵌套使用
		case 1:n++; //-- n变成了2， 所以case1不执行
		case 2:m++; n++;
			break;
		}
	case 4:m++;
		break;
	default:
		break;
	}
	printf(" m = %d, n = %d\n ", m, n);
	return 0;
}