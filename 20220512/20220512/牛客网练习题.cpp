#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char arr1[] = { "123456" };//'\0'Ҳ������������
//	char arr2[] = { '1','2','3','4','5','6' };//��û��'\0'
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}

//#include <stdio.h> 
//int main(int argc, char* argv[]) {
//    int i;
//    for (i = 0; i < argc; i++)
//        printf("% s",argv[i]);
//            return 0;
//}

//int main()
//{
//	char a[5];
//	char* pa = a;
//	pa = "12345";
//	return 0;
//}

//���ļ�����n������д�뵽����a��
void sca_from_file(int a[], int n, char fn[])
{
    FILE* fp;
    int i;
    fp = fopen(fn, "r");
    for (i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]);
    }
    fclose(fp);
}
int main()
{
    sca_from_file();
    return 0;
}
