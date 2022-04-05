#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
////结构体
////char int double...
////人 = 3.14？
////书 -  复杂对象
////名字+身高+年龄+身份证号码。。。
////书名+作者+出版号+定价+书号。。。
//
////复杂对象 - 结构体 - 我们自己创造出来的一种类型
////
//
//	return 0;
//}
//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55

};

int main()
{
	//利用结构体类型 - 创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计" , 55 };
	strcpy(b1.name, "C++"); //strcpy - string copy - 字符串拷贝 - 库函数 - <string.h>
	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//利用pb打印出我的书名和价格
	//.   结构体变量.成员	
	//->  结构体指针->成员
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	/*printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);*/

	/*printf("书名：%s\n", b1.name);
	printf("售价：%d元\n", b1.price);
	b1.price = 15;
	printf("修改后的价格：%d元\n", b1.price);*/
	return 0;
	}