#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);//3
//	switch (day)
	//{
	/*case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("������\n");
		break;*/
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("��Ϣ��\n");
	//	break;
	//case 7:
	//	printf("��Ϣ��\n");
	//	break;
	//default:
	//	printf("�������\n");
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
		{//switch����Ƕ��ʹ��
		case 1:n++; //-- n�����2�� ����case1��ִ��
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