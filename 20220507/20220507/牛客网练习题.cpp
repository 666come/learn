#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ö��
//int main()
//{
//    enum weekday {
//        sun,
//        mon = 3,
//        tue,
//        wed,
//        thu
//    };
//    enum weekday workday;
//    workday = wed;
//    printf("%d\n", workday);
//	return 0;
//}

//��λ�������λ������
//int main()
//{
//	int a = 3 << 2 | 3;
//	//���ȼ���3<<2��|3
//	//00000000000000000000000000000011 -3
//	//00000000000000000000000000001100 -12
//	//00000000000000000000000000001111 -15
//	return 0;
//}

//��ֵ�������ֵ����ֵ
//int main()
//{
//	int b, c;
//	//int a = (b = (c = 0)); --1
//	int a = b = c; //1
//  int a =b+c =3; //0
//	return 0;
//}

//������ --̰�ķ�
//int main() {
//    int z, x = 5, y = -10, a = 4, b = 2;
//    z = x++ - --y * b / a; //5 - -11*2/4
//    printf("%d\n", z);
//    return 0;
//}

//���
//int main() {
//    int sum = 0;
//    int i = 0, j = 0;
//
//    for (j = 0; j < 6; j++) {
//        if (j % 2) continue;
//        sum++;
//    }
//    printf("sum = %d", sum);
//
//    return 0;
//}

struct TEST_TYPE {
    int a;
    int b;
};
int testSize(struct TEST_TYPE val[10]) {
    return sizeof(val);
}
int main()
{
    int val;
    printf("%d\n", sizeof(val));
    return 0;
}
