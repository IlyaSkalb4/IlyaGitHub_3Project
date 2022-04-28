#include <iostream>
#include <cstdio>
using namespace std;

char shift(char symbol, int count)
{
	if (symbol == 32)
	{
		symbol = 32;
		return symbol;
	}
	if (count < 0)
	{
		count = 0 - count;
		for (int i = 1; i <= count; i++)
		{
			if (symbol == 'A') symbol = 'Z';
			else if (symbol == 'a') symbol = 'z';
			else
				symbol--;
		}
	}
	else
	{
		for (int i = 1; i <= count; i++)
		{
			if (symbol == 'Z') symbol = 'A';
			else if (symbol == 'z') symbol = 'a';
			else
				symbol++;
		}
	}
	return symbol;
}

void Caesar(const char* name, const char* name2, int count)
{
	int num = 0;
	char s;
	FILE* f1;
	FILE* f2;
	if (fopen_s(&f1, name, "r") == NULL && fopen_s(&f2, name2, "w") == NULL)
	{
		printf("File opened!\n");
		while ((s = fgetc(f1)) != EOF)
		{
			s = shift(s, count);
			fputc(s, f2);
		}
		fclose(f2);
		fclose(f1);
	}
	else
	{
		printf("File not opened!\n");
	}
}

int main()
{
	int num;
	cout << "Enter - 3\n";
	cout << "Enter number of shifts: ";
	cin >> num;
	Caesar("file.txt", "file2.txt", num);
	return 0;
}