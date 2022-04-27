#define INT
#include "Lib.h"

int main()
{
	int s = 10;
#ifdef INT
	int* arr = new int[s];
#endif
	int num;

	init_random(arr, s);
	cout << "Generated numbers:\n";
	print(arr, s);
	cout << "\nMax: " << getmax(arr, s);
	cout << "\nMin: " << getmin(arr, s);
	cout << "\n\nSort:\n";
	sort(arr, s);
	print(arr, s);
	cout << "\nEnter index(0,1,2...9): ";
	cin >> num;
	change(arr, s, num);
	cout << endl;
	return 0;
}