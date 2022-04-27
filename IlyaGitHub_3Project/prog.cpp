#include "Lib.h"

void init_random_int(int* arr, int s)
{
	for (int i = 0; i < s; i++)
	{
		arr[i] = rand() % 51;
	}
}
void print_int(int* arr, int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int getmax_int(int* arr, int s) {
	int temp = arr[0];
	for (int i = 1; i < s; i++) {
		if (temp < arr[i])
			temp = arr[i];
	}
	return temp;
}
int getmin_int(int* arr, int s) {
	int temp = 99999;
	for (int i = 1; i < s; i++) {
		if (temp > arr[i])
			temp = arr[i];
	}
	return temp;
}
void sort_int(int* arr, int s)
{
	int temp;
	for (int i = 0; i < s - 1; i++) {
		for (int j = 0; j < s - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void change_int(int* arr, int s, int num)
{
	if (num >= 0 && num <= s)
	{
		cout << "Enter number: ";
		cin >> arr[num];
		print_int(arr, s);
	}
	else
	{
		cout << "No such index.\n";
	}
}