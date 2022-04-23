#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//整型除法
//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c = a / b;
//	printf("%d\n", c);
//	//当前编译器下结果是0
//	return 0;
//}

//指针赋值NULL  -- 等价于什么？  --直接赋值0
//int main()
//{
//	int* p = NULL;
//	printf("%p\n", p);
//	int* q = 0;
//	printf("%p\n", q);
//	return 0;
//}


//JAVA题  --暂时可以忽略
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

////枚举的题enum
//enum etest {
//    eparam1,       //没有赋值就是 0
//    eparam2,       // 1
//    eparam3 = 10,  //将其赋值为10，下一个会递增
//    eparam4,       //= 11
//    eparam5 = 'a', //'a' 的ASCII码值为‘A’+32 =65+32 = 97   
//    eparam6        //= 98
//}epr;
//int main()
//{
//    printf("%d,%d", eparam4, eparam6);
//    return 0;
//}

//char类型的取值（-128 到 127）
//int main()
//{
//	char chr = 127;
//	int sum = 200;
//	chr += 1;
//	//01111111
//	//10000000
//	//变成了负数，注意：这是补码
//	//10000001 -反码
//	//11111110 - 原码
//	//结果为 -128
//	sum += chr;
//	printf("%d\n", sum);//200-128 = 72;
//	return 0;
//}

//执行结果
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

//指针传参
//int main()
//{
//	const char* str1 = "ABCDEF";
//	const char* str2 = "ABCDEF";
//	const char* str3 = str1;//str1就相当于是一个指针，将str1里面的数组内容传过去了
//	printf("%s\n", str3);
//	return 0;
//}

//数组初始化
//int main()
//{
//	const char arr1[2] = {'a','b'};
//
//	return 0;
//}

//输入非法字符会怎么样呢？ --结果无法预测，但当前编译器下结果正常
//int main() {
//    int x, y, z;
//        scanf("%d%d%d", &x, &y, &z);
//    printf("x+y+z=%d\n", x + y + z);
//     
//}

//执行结果 --这是什么语言啊？，我擦勒
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

//输入1abcedf2df  的结果是什么
//int main() {
//    char a = 0, ch;
//    while ((ch = getchar()) != '\n') {
//        if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//            ch = ch - 'a' + 'A';//用ASII码值进行计算的
//        a++;
//        putchar(ch);
//    }
//    printf("\n");
//    return 0;
//}


//执行结果
int main() {
    int a[3][3] = { {1, 2}, {3, 4}, {5, 6} }, i, j, s = 0;
    for (i = 1; i < 3; i++)
        for (j = 0; j <= i; j++) s += a[i][j];//嵌套循环要一层一层来，切记要内层循环为假才跳出内层循环.
    printf("%d\n", s++);
}//19