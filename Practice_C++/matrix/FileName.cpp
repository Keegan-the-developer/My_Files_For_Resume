#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(0, "RU");
	int x = 0;
	int z = 0;
	cout << "Введите кол-во строк матрицы: ";
	cin >> x;
	cout << endl;
	cout << "Введите кол-во столбцов матрицы: ";
	cin >> z;
	cout << endl;
	int** Arr = new int* [x];
	for (int i = 0; i < x; i++)
	{
		Arr[i] = new int[z];
	}
	cout << "Введите элементы матрицы 5 на 5 построчно: ";
	cout << endl;
	for (int i = 0; i < x; i++) {
		cout << "Строка " << i + 1 << ": ";
		for (int j = 0; j < z; j++) {
			cin >> Arr[i][j];
		}
	}
	cout << "Ваша матрица:" << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < z; j++) {
			cout << setw(4) << Arr[i][j];
		}
		cout << endl;
	}
	int max = Arr[0][0];
	int a = Arr[2][2];
	int* P = &a;
	if (*P > max) max = *P;

	for (int i = 1; i <= 3; i++)
	{
		int* F = &Arr[i][3];
		if (*F > max) max = *F;
	}

	for (int i = 0; i < 5; i++)
	{
		int* X = &Arr[i][4];
		if (*X > max) max = *X;
	}
	int* p = &max;
	cout << "Максимальный элемент выделенной области: " << *p << endl;
	return 0;
}
