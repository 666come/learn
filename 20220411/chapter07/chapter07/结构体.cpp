#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����һ��ѧ�� -һЩ����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���  Stu -�ṹ���ǩ  struct Stu -�ṹ������
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}Stu; //s1,s2,s3������ȫ�ֵĽṹ�����
//
//int main()
//{
//	struct Stu s = {"����",20,"15394799213","��"};//�ֲ�����
//	Stu s1 = {"����",30,"12343295543","����"};
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
//	//��Ա����
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
//	Stu s = { "����",40,"12834752382","��" };
//	//��ӡ�ṹ������
//	//Print1 �� Print2 �Ǹ�����
//	//��Print2����  ��Ϊ��Print1����ʱ����ʱ�βΣ��β�ʱʵ�ε���ʱ�������ռ��˷����أ�ʱ�䳤
//	//Print2:�����ǵ�ַ����ַ����4���ֽڻ���8���ֽڣ�ʱ��̡�
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