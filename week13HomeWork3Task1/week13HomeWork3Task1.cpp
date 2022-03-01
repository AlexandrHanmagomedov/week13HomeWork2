// week13HomeWork3Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//
//Задание 1. Используя два указателя на массив целых
//чисел, скопировать один массив в другой.Использовать
//в программе арифметику указателей для продвижения
//по массиву, а также оператор разыменования.

#include <iostream>
#include<time.h>
using namespace std;

int main()
{
	const int Size = 6;
	int Arr1[Size] = { 0,2,4,6,8,10 };
	int Arr2[Size] = {};

	int* pArr1 = Arr1;
	int* pArr2 = Arr2;
	cout << endl;
	cout << "Do kopirovaniya";
	cout << endl;
	for (int i = 0; i < Size; i++) {
		cout << *(Arr1 + i) << " ";
	}
	cout << endl;
	cout << "Massiv 1";
	cout << endl;

	for (int i = 0; i < Size; i++)
	{
		pArr2 = pArr1;
		cout << *pArr2 << " ";
		pArr1++;
		pArr2++;
	}
	cout << endl;
	cout << "Massiv 2";
	cout << endl;
	

}
