/// Задание 2. Используя указатель на массив целых чисел,
//изменить порядок следования элементов массива на
//противоположный.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыме -
//нования.

#include <iostream>
#include<time.h>
using namespace std;

int main()
{
	const int Size = 6;
	int Arr1[Size] = { 0,2,4,6,8,10 };
	cout << "Do perevorota";
	cout << endl;
	for (int i = 0; i < Size; i++) {
		cout << *(Arr1 + i) << " ";
	}
	cout << endl;
	cout << "Massiv 1";
	cout << endl;

	cout << "Posle perevorota";
	cout << endl;
	int Temp;
	int* First = &Arr1[0];
	int* Last = &Arr1[5];
	for (int i = 1; i < Size; i++)
	{
		Temp = *First;
		*First = *Last;
		*Last = Temp;
		if (First < Last) {
			First++;
			Last--;
		}
	}

	for (int i = 0; i < Size; i++) {
		cout << *(Arr1 + i) << " ";
	}
	cout << endl;
	cout << "Massiv 1";
	cout << endl;
}

