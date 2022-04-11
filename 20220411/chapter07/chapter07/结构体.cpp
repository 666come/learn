#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//描述一个学生 -一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字  Stu -结构体标签  struct Stu -结构体类型
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}Stu; //s1,s2,s3是三个全局的结构体变量
//
//int main()
//{
//	struct Stu s = {"张三",20,"15394799213","男"};//局部变量
//	Stu s1 = {"旺财",30,"12343295543","保密"};
//
//	return 0;
//}

//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct s S;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);//100
//	printf("%s\n", t.S.arr);//hello world
//	printf("%lf\n", t.S.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}

//typedef struct
//{
//	//成员变量
//	char name[20];
//	short age; 
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "李四",40,"12834752382","男" };
//	//打印结构体数据
//	//Print1 和 Print2 那个更好
//	//答：Print2更好  因为：Print1传参时传的时形参，形参时实参的临时拷贝，空间浪费严重，时间长
//	//Print2:传的是地址，地址就是4个字节或者8个字节，时间短。
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = Add(a, b);
	return 0;
}