#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//
//	return 0;
//}

//Êä³ö½á¹û
//void ss(char* s, char t) {
//    while (*s) {
//        if (*s == t) *s = t - 'a' + 'A';
//        s++;
//    }
//}
//int main() {
//    char str1[100] = "abcddfefdbd", c = 'd';
//    ss(str1, c);
//    printf("%s\n", str1);
//}

//#include<string.h>
//#include<stdlib.h>
//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//}
//int main()
//{
//    Test();
//    return 0;
//}

//int main()
//{
//	int a = 0xabcd1234;
//	char b = ((char*)&a)[0];
//	printf("%c\n", b);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Clock {
//public:
//    Clock(int NewH = 0, int NewM = 0, int NewS = 0) { Hour = NewH; Minute = NewM; Second = NewS; }
//    void ShowTime() { cout << Hour << ":" << Minute << ":" << Second; }
//    Clock  operator ++();
//private:
//    int Hour, Minute, Second;
//};
//Clock Clock::operator ++() {
//    Second++;
//    if (Second >= 60) {
//        Second = Second - 60;
//        Minute++;
//        if (Minute >= 60) {
//            Minute = Minute - 60;
//            Hour++;
//            Hour = Hour % 24;
//        }
//    }
//    return *this;
//};
//
//int main() {
//    Clock c1;
//    (++c1).ShowTime();
//    return 0;
//}

int main() {
    int p[8] = { 11, 12, 13, 14, 15, 16, 17, 18 }, i = 0, j = 0;
    while (i++ < 7) if (p[i] % 2) j += p[i];
    printf("%d\n", j);
}
