#include<iostream>
using namespace std;

void FillRand(int* arr, const int n);
void Print(int arr[], const int n);

#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n] {};
	cout << arr << endl;
	FillRand(arr, n);
	Print(arr, n);

	int value;	//����������� ��������
	cout << "������� ����������� ��������: "; cin >> value;
	/*
	TODO: �������� ���������� ��������
	*/
	arr[n] = value;
	n++;
	Print(arr, n);

	/*int brr[5];
	cout << brr << endl;
	FillRand(brr, 5);
	Print(brr, 5);*/

	delete[] arr;
	//for (;;)new int[1000000];
	cout << "That's okay" << endl;
}

void FillRand(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		//* - �������� �������������, ���������� �������� �� ������.
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//[] - �������� ��������������, ���������� �������� �� �������
		cout << arr[i] << "\t";
	}
	cout << endl;
}