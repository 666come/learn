#define _CRT_SECURE_NO_WARNINGS
//2_9.cpp
#include<iostream>
using namespace std;
int main() {
	 int n = 4;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 30; j++)
			cout << ' ';
		for (int j = 1; j <= 8 - 2 * i; j++)
			cout << ' ';
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << ' * ';
		cout << endl;
	}
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 1; j <= 30; j++)
			cout << ' ';
		for (int j = 1; j <= 7 - 2 * i; j++)
			cout << ' * ';
		cout << endl;
	}
	return 0;
}