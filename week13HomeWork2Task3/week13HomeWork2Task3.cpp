// week13HomeWork2Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*
Задание 3. Используя два указателя на массивы целых
чисел, скопировать один массив в другой так, чтобы во
втором массиве элементы находились в обратном порядке.
Использовать в программе арифметику указателей
для продвижения по массиву, а также оператор разыме-
нования.
*/

/// Задание 2. Используя указатель на массив целых чисел,
//изменить порядок следования элементов массива на
//противоположный.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыме -
//нования.

#include <iostream>
#include<time.h>
using namespace std;
void vivod(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
}
void perevorot(int* Arr1, int Size) {
	int Temp;
	int* First = &Arr1[0];
	int* Last = &Arr1[5];
	for (int i = 1; i < Size; i++) {
		Temp = *First;
		*First = *Last;
		*Last = Temp;
		if (First < Last) {
			First++;
			Last--;
		}
	}
}
//void *copi(int* Arr1, int* Arr2, int Size) {
void copi(int* pArr1, int* pArr2, int Size) {

	for (int i = 0; i < Size; i++)
	{
		pArr2 = pArr1;
		cout << *pArr2 << " ";
		pArr1++;
		pArr2++;
	}
}
int main()
{
	const int Size = 6;
	int Arr1[Size] = { 0,2,4,6,8,10 };
	int Arr2[Size] = {};

	cout << "Do perevorota" << endl;
	vivod(Arr1, Size);
	cout << endl;
	cout << "Massiv 1" << endl << endl;

	perevorot(Arr1, Size);
	cout << "Posle perevorota" << endl;
	vivod(Arr1, Size);
	cout << endl;
	cout << "Massiv 1" << endl << endl;

	int* pArr1 = Arr1;
	int* pArr2 = Arr2;

	copi(Arr1, Arr2, Size);
	cout << endl << "Posle kopirovaniya" << endl;
	cout << "Massiv 2" << endl << endl;
	//vivod(Arr2, Size);

	////cout << *pArr2 << " ";

}



