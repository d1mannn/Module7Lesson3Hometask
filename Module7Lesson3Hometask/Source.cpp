#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Header.h"
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	short int task;
	do
	{
		task = TaskNumber(&task);
		switch (task)
		{
			case 1:
			{
				/*1.	Даны два массива, упорядоченных по возрастанию :
				А[n] и B[m].Сформируйте массив C[n + m],
					состоящий из элементов массивов А и В, 
					упорядоченный по возрастанию(Массив С не должен сортироваться).*/
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				ArrFilling(arr, &size);
				ArrFilling(arr2, &size);
				ArrSort(arr, &size);
				ArrSort(arr2, &size);
				ArrMatching(arr, arr2, arr3, &size);
				ArrPrint(arr3, &size);
			} break;
		}

	} while (task > 0);
	
}