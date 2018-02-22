// 2, 3, 4 � 5� ������� ����������, �.�. srand ��������� ��������� ������ � ���� �� �������... ��������� �� �������)

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Header.h"
using namespace std;


void main()
{	
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	short int task;
	do
	{
		task = TaskNumber(&task);
		switch (task)
		{
			case 1:
			{
				/*1.	���� ��� �������, ������������� �� ����������� :
				�[n] � B[m].����������� ������ C[n + m],
					��������� �� ��������� �������� � � �, 
					������������� �� �����������(������ � �� ������ �������������).*/
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				ArrFilling(arr, &size);
				ArrFilling(arr2, &size);
				ArrSort(arr, &size);
				ArrSort(arr2, &size);
				cout << "���������� ���������" << endl;
				ArrMatching(arr, arr2, arr3, &size);
				ArrPrint(arr3, &size);
			} break;

			case 2:
			{
				/*2.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, � ������� ����� ������� ����� �������� ���� ��������.*/
				srand(time(NULL));
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				ArrFilling(arr, &size);
				ArrFilling(arr2, &size);
				cout << "������ 1�" << endl;
				ArrPrint(arr, &size);
				cout << "������ 2�" << endl;
				ArrPrint(arr2, &size);
				cout << "���������� ������" << endl;
				ArrMatchingWithoutSave(arr, arr2, arr3, &size);
			} break;

			case 3:
			{
				//3.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, � ������� ����� ������� �������� ������� A, ������� �� ���������� � B.
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				ArrFilling(arr, &size);
				ArrFilling(arr2, &size);
				cout << "������ 1�" << endl;
				ArrPrint(arr, &size);
				cout << "������ 2�" << endl;
				ArrPrint(arr2, &size);
				cout << "���������� ������" << endl;
				ArrMatchingSimiliar(arr, arr2, arr3, &size);
			} break;

			case 4:
			{
				//4.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, � ������� ����� ������� �������� ������� B, ������� �� ���������� � A.
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				ArrFilling(arr, &size);
				ArrFilling(arr2, &size);
				cout << "������ 1�" << endl;
				ArrPrint(arr, &size);
				cout << "������ 2�" << endl;
				ArrPrint(arr2, &size);
				cout << "���������� ������" << endl;
				ArrMatchingSimiliar(arr, arr2, arr3, &size);
			} break;

			case 5:
			{
				//5.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, � ������� ����� ������� �������� �������� A � B, ������� �� �������� ������ ��� ���.
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				ArrFilling(arr, &size);
				ArrFilling(arr2, &size);
				cout << "������ 1�" << endl;
				ArrPrint(arr, &size);
				cout << "������ 2�" << endl;
				ArrPrint(arr2, &size);
				cout << "���������� ������" << endl;
				ArrMatchingSimiliar(arr, arr2, arr3, &size);
			} break;

			case 6:
			{
				//1.	*�������� �������, ������� ��������� ���������� ������ ����� ����� � ��������� ��� ���������� �������.
				int size = SizeOfArr();
				int arr[50];
				ArrFilling(arr, &size);
				ArrPrint(arr, &size);
			} break;

			case 7:
			{
				//2.	*�������� �������, ������� ��������� ����� � ���������� ������, ���� ����� ������ � ����, ���� ��������.
				srand(time(NULL));
				int n = -10 + rand() % 20;
				cout << "n = " << n << endl;
				if (TrueFalse(&n) == 1)
					cout << "�������" << endl;
				else
					cout << "����" << endl;
			} break;

			case 8:
			{
				/*3.	**�������� �������, ������� ���������� ������, ���� ���������� ����� �������, � ����, ���� �� �������.������� ����� � ��� �����, ������� �������� ������ �� 1 � �� ����(2, 5, 7, 11 � �.�.).*/
				srand(time(NULL));
				int n = -10 + rand() % 20;
				cout << "n = " << n << endl;
				if (TrueFalse(&n, 0) == 1)
					cout << "�������" << endl;
				else
					cout << "����" << endl;
			} break;

			case 9:
			{	
				//����� ���������� �����������, ���� ����� ���� ��� ��������� ����� ��� ������.�������� ������� ������ ����� ����� �� ��������� ���������.
				srand(time(NULL));
				int n = 10 + rand() % 100;
				cout << "n = " << n << endl;
				if(PerfectNumber(&n) == 1)
					cout << "����������� �����" << endl;
				else
					cout << "������������� �����" << endl;
			} break;

			case 10:
			{
				//�������� �������, ������� ���������� ������, ���� ���������� �������� �������� ��������� - �������� � ����, ���� �� ��������.

				// �� �� �������� ��� �� ��������) ��� �� ����������???
			} break;

			case 11:
			{
				//�������� �������, ������� ��������� ���������� ������ ����� ����� � ���������� �������� ������������� ����� � ���� �������
				int arr[50], size = SizeOfArr();
				ArrFilling(arr, &size);
				ArrPrint(arr, &size);
				cout << "\n������������ �������� ������� - " << MaxArr(arr, &size) << endl;
			} break;

			case 12:
			{
				//�������� �������, ������� ��������� ��� ������� ����� �����.��������� ������������ �������� ��������� ������ ���� ��������, � ��������� ������� � ������ ������.
				int size = SizeOfArr();
				int arr[50], arr2[50], arr3[50];
				ArrFilling(arr, &size);
				ArrFilling(arr2, &size);
				cout << "������ 1�" << endl;
				ArrPrint(arr, &size);
				cout << "������ 2�" << endl;
				ArrPrint(arr2, &size);
				cout << "��������� ������" << endl;
				ArrSum(arr, arr2, arr3, &size);
				ArrPrint(arr3, &size);
			} break;

			case 13:
			{
				/*�������� �������, ������� ��������� ����� ������������ ����� � ��������� 
					����� �� ����� ������ ���� ���� ����� ��������� ���� ����(���������� �����).
					������� ���������� ������, ���� ����� ����������(����� �����) � ����, ���� �� ����������(����� �� �����).*/
				srand(time(NULL));
				int n = 100000 + rand() % 899999;
				cout << n << endl;
				if (HappyNumb(&n) == 1)
					cout << "���������� �����" << endl;
				else
					cout << "���������" << endl;
			} break;
		}

	} while (task > 0);
	
}