// Инженерный калькулятор_console.cpp: основные мат. функции
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>   
#include <iostream>

using namespace std;
int64_t fact(int x);
int x, i;
double x_1, z;

int main()
{
	while (true) {
		long double a, b;
		long long s;
		char d;

		setlocale(0, "rus");

		cin >> a >> d;
		switch (d) {
		case '+':
			cin >> b;
			s = a + b;
			cout << s << "\n";
			break;
		case'-':
			cin >> b;
			s = a - b;
			cout << s << "\n";
			break;
		case '*':
			cin >> b;
			s = a*b;
			cout << s << "\n";
			break;
		case '/':
			cin >> b;
			if (b == 0) {
				cout << "Деление на ноль\n";
				break;
			}
			s = a / b;
			cout << s << "\n";
			break;
		case '!':
			if (fact(a) == -1) cout << "Ошибка"; else {
				s = fact(a);
				cout << s << "\n";
			}
			break;
		case '^':
			cin >> b;
			s = pow(a, b);
			cout << s << "\n";
			break;
		}
		return 0;
	}
}

int64_t fact(int a) {
	int64_t i = 2, f = 1;
	while (i <= a) {
		f = f*i;
		i++;
	}
	if (a < 0) f = -1;
	return f;

}



