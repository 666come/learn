#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
////�ṹ��
////char int double...
////�� = 3.14��
////�� -  ���Ӷ���
////����+���+����+���֤���롣����
////����+����+�����+����+��š�����
//
////���Ӷ��� - �ṹ�� - �����Լ����������һ������
////
//
//	return 0;
//}
//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55

};

int main()
{
	//���ýṹ������ - ����һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������" , 55 };
	strcpy(b1.name, "C++"); //strcpy - string copy - �ַ������� - �⺯�� - <string.h>
	printf("%s\n", b1.name);
	//struct Book* pb = &b1;
	//����pb��ӡ���ҵ������ͼ۸�
	//.   �ṹ�����.��Ա	
	//->  �ṹ��ָ��->��Ա
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	/*printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);*/

	/*printf("������%s\n", b1.name);
	printf("�ۼۣ�%dԪ\n", b1.price);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);*/
	return 0;
	}