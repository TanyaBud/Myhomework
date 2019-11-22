#include <iostream>
using namespace std;
int main()
{
	int a;
	int begin = 1;
	int end = 20;
	int i = begin;
	cout << "Enter the digit from 0 to 20:";// Условие
	cin >> a;

	for (int i = 1; i <= 20; ++i) {
		if (a > 20)continue; //если "a"  не будет соответствовать условию,

		cout << "\n" << i * a << endl;// Правильный ответ
	}

	cout << endl; // то конец
}