#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Header.h"
using namespace std;


short int TaskNumber(short int *task)
{
	cout << "Введите номер задания - ";
	cin >> *task;
	return *task;
}


int SizeOfArr()
{	
	int size = 0;
	setlocale(LC_ALL, "Rus");
	do
	{
		cout << "Введите размерность массива - от 10 до 50 - ";
		cin >> size;
	} while (size < 10 || size > 50);
	return size;
}

int ArrFilling(int *arr, int *size)
{	
	srand(time(NULL));
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

int ArrMatchingWithoutSave(int *arr, int* arr2, int *arr3, int *size)
{	
	int count = 0;
	for (int i = 0; i < *size; i++)
	{
		if (arr[i] == arr2[i])
		{
			arr3[count] = arr[i];
			count++;
		}
	}
	ArrPrint(arr3, &count);
	return *arr3;
}

int ArrMatchingSimiliar(int *arr, int* arr2, int *arr3, int *size)
{
	int count = 0;
	for (int i = 0; i < *size; i++)
	{
		if (arr[i] != arr2[i])
		{
			arr3[count] = arr[i];
			count++;
		}
	}
	if (count == 0)
		cout << "Все числа одинаковые" << endl;
	else
		ArrPrint(arr3, &count);
	return *arr3;
}

bool TrueFalse(int *n)
{
	if (*n % 2 == 0)
		return 1;
	else
		return 0;
}

bool TrueFalse(int *n, int)
{
	if(*n %1 == 0 && *n % *n == 0)
		return 1;
	else
		return 0;
}

bool PerfectNumber(int *n)
{	
	int sum = 0;
	for (int i = 1; i <= *n; i++)
	{
		if (*n % i == 0)
			sum++;
	}
	if (sum == *n)
		return 1;
	else
		return 0;
}

int MaxArr(int *arr, int *size)
{
	int max = arr[0];
	for (int i = 0; i < *size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

int ArrSum(int *arr, int *arr2, int *arr3, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		arr3[i] = arr[i] + arr2[i];
	}
	return *arr3;
}

bool HappyNumb(int *n)
{
	int a = *n / 100000;
	int f = *n % 10;
	int e = (*n % 100) / 10;
	int d = (*n % 1000) / 100;
	int c = (*n % 10000) / 1000;
	int b = (*n % 100000) / 10000;
	if (a + b + c == d + e + f)
		return 1;
	else
		return 0;
}