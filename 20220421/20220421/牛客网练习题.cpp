#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//代码结果
//int main() {
//    char* ptr;
//    char arr[] = "12345678";
//    ptr = arr;
//    ptr += 5; //数组地址+5
//    printf("%s", ptr);
//    return 0;
//}//打印结果为下标为5和之后的元素


//代码结果
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
//}//数组名传参，函数内部重新定义




//int convert(int i) {
//    //7
//    //00000000000000000000000000000111 -原码 反码 补码
//    
//    return i| 1<<31;  //___________________   -填入表达式，使得结果为8000 0007
//    //10000000000000000000000000000000  --8000 0000
//    // |1<<31 --按位或 
//    //10000000000000000000000000000111  --8000 0007
//}

//或者
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


//多个条件运算符的结合
//#include<stdlib.h>
//int main() {
//	int max = 1;
//	int i = 11, j = 13, k = 5;
//	max = i > j ? i > k ? i : k : j > k ? j : k;
//	printf("max = %d\n", max);
//	return 0;
//}
//先判断 j > k ? j : k 
//再判断 i > k ? i : k 
//最后再到 i > j ? i > k
//可以这样理解 i > j ? (i > k ? i : k) : (j > k ? j : k);


//对字符串的正确引用
//int main()
//{
//
//	char str[4][12] = { "aaa", "bbbb", "ccccc", "dddddd" };
//	char* strp[4];
//	printf("%s\n ", *strp[3]);
//	return 0;
//}

//指针赋值
//int main()
//{
//	int a = 3;
//	int* p = &a;
//	printf("%p\n", p);
//	return 0;
//}

//执行结果
//int main() {
//    int x;
//    scanf("%d", &x);
//    if (x-- < 5)
//        printf("%d", x);
//    else
//        printf("%d", x++);
//    return 0;
//}


//一维数组元素的打印
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