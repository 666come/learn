#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//���ͳ���
//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c = a / b;
//	printf("%d\n", c);
//	//��ǰ�������½����0
//	return 0;
//}

//ָ�븳ֵNULL  -- �ȼ���ʲô��  --ֱ�Ӹ�ֵ0
//int main()
//{
//	int* p = NULL;
//	printf("%p\n", p);
//	int* q = 0;
//	printf("%p\n", q);
//	return 0;
//}


//JAVA��  --��ʱ���Ժ���
//class Point {
//public:
//    Point(int xx = 0, int yy = 0) {
//        X = xx;
//        Y = yy;
//    }
//    Point(Point& p) {
//        X = p.X;
//        Y = p.Y;
//        printf("*");
//    }
//private:
//    int X, Y;
//};
//
//class Line {
//public:
//    Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {}
//private:
//    Point p1, p2;
//};

////ö�ٵ���enum
//enum etest {
//    eparam1,       //û�и�ֵ���� 0
//    eparam2,       // 1
//    eparam3 = 10,  //���丳ֵΪ10����һ�������
//    eparam4,       //= 11
//    eparam5 = 'a', //'a' ��ASCII��ֵΪ��A��+32 =65+32 = 97   
//    eparam6        //= 98
//}epr;
//int main()
//{
//    printf("%d,%d", eparam4, eparam6);
//    return 0;
//}

//char���͵�ȡֵ��-128 �� 127��
//int main()
//{
//	char chr = 127;
//	int sum = 200;
//	chr += 1;
//	//01111111
//	//10000000
//	//����˸�����ע�⣺���ǲ���
//	//10000001 -����
//	//11111110 - ԭ��
//	//���Ϊ -128
//	sum += chr;
//	printf("%d\n", sum);//200-128 = 72;
//	return 0;
//}

//ִ�н��
//int main() {
//    for (int i = 1; i < 6; i++) {
//        if (i % 2 != 0) {
//            printf("#");
//            continue;
//        }
//        printf("*");
//    }
//    printf("\n");
//    return 0;
//}

//ָ�봫��
//int main()
//{
//	const char* str1 = "ABCDEF";
//	const char* str2 = "ABCDEF";
//	const char* str3 = str1;//str1���൱����һ��ָ�룬��str1������������ݴ���ȥ��
//	printf("%s\n", str3);
//	return 0;
//}

//�����ʼ��
//int main()
//{
//	const char arr1[2] = {'a','b'};
//
//	return 0;
//}

//����Ƿ��ַ�����ô���أ� --����޷�Ԥ�⣬����ǰ�������½������
//int main() {
//    int x, y, z;
//        scanf("%d%d%d", &x, &y, &z);
//    printf("x+y+z=%d\n", x + y + z);
//     
//}

//ִ�н�� --����ʲô���԰������Ҳ���
//int main() {
//    FILE* fp;
//    int i = 20, j = 30, k, n;
//    fp = fopen("d1.dat", "w");
//    fprintf(fp, "%d\n", i);
//    fprintf(fp, "%d\n", j);
//    fclose(fp);
//    fp = fopen("d1.dat", "r");
//    fscanf(fp, "%d%d", &k, &n);
//    printf("%d,%d\n", k, n);
//    fclose(fp);
//}

//����1abcedf2df  �Ľ����ʲô
//int main() {
//    char a = 0, ch;
//    while ((ch = getchar()) != '\n') {
//        if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//            ch = ch - 'a' + 'A';//��ASII��ֵ���м����
//        a++;
//        putchar(ch);
//    }
//    printf("\n");
//    return 0;
//}


//ִ�н��
int main() {
    int a[3][3] = { {1, 2}, {3, 4}, {5, 6} }, i, j, s = 0;
    for (i = 1; i < 3; i++)
        for (j = 0; j <= i; j++) s += a[i][j];//Ƕ��ѭ��Ҫһ��һ�������м�Ҫ�ڲ�ѭ��Ϊ�ٲ������ڲ�ѭ��.
    printf("%d\n", s++);
}//19