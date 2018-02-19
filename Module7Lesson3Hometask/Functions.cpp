#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Header.h"
using namespace std;


short int TaskNumber(short int *task)
{
	cout << "¬ведите номер задани€ - ";
	cin >> *task;
	return *task;
}


int SizeOfArr()
{	
	int size = 0;
	setlocale(LC_ALL, "Rus");
	do
	{
		cout << "¬ведите размерность массива - от 10 до 50 - ";
		cin >> size;
	} while (size < 10 || size > 50);
	return size;
}

int ArrFilling(int *arr, int *size)
{
	srand(time(0));
	for (int i = 0; i < *size; i++)
	{
		arr[i] = -100 + rand() % 200;
	}
	return *arr;
}

void ArrPrint(int *arr, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		cout << arr[i] << endl;
	}
}

int ArrSort(int *arr, int *size)
{	
	int temp = 0;
	for (int i = 0; i < *size - 1; i++)
	{	
		for (int j = *size - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "—ортировка завершена" << endl;
	return *arr;
}

int ArrMatching(int *arr, int *arr2, int *arr3, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		arr3[i] = arr[i] + arr2[i];
	}
	return *arr3;
}