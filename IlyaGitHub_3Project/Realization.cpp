#include "prototype.h"

void del(Cret_b* q)
{
	delete[] q;
}
Cret_b* creat(int s)
{
	Cret_b* q = new Cret_b[s];
	return q;
}
Cret_b input()
{
	Cret_b book;
	cout << "Имя: ";
	cin.ignore();
	coppy(book.name);
	cout << "Автор: ";
	coppy(book.aut);
	cout << "Издательство: ";
	coppy(book.stud);
	cout << "Жанр: ";
	coppy(book.genre);
	return book;
}
Cret_b* add(Cret_b* books, int& s, Cret_b book)
{
	Cret_b* tmp = creat(s + 1);
	for (size_t i = 0; i < s; i++)
	{
		tmp[i] = books[i];
	}
	tmp[s] = book;
	del(books);
	s++;
	return tmp;
}
Cret_b* delet(Cret_b* books, int& s, char* name)
{
	Cret_b* tmp = creat(s - 1);
	int j = 0;
	for (size_t i = 0; i < s; i++)
	{
		if (strcmp(name, books[i].name) == 0)
		{
			continue;
		}
		tmp[j] = books[i];
		j++;
	}
	del(books);
	s--;
	return tmp;
}
void print(Cret_b book)
{
	cout << book.name << "\t" << book.aut << "\t" << book.stud << "\t" << book.genre;
	cout << endl;
}
void print(Cret_b* book, int s)
{
	for (size_t i = 0; i < s; i++)
	{
		cout << "#" << i + 1 << " ";
		print(book[i]);
	}
	cout << endl;
}
void coppy(char* book)
{
	char tmp[30];
	int tp = 0;
	gets_s(tmp, 30);
	tp = strlen(tmp) + 1;
	strcpy_s(book, tp, tmp);
}
void searchAut(Cret_b* books, int s, char* tmp)
{
	int num = 0;
	for (size_t i = 0; i < s; i++)
	{
		if (strcmp(tmp, books[i].aut) == 0)
		{
			print(books[i]);
		}
		else
			num++;
	}
	if (num == 10)
	{
		cout << "Таких нету!:(\n";
	}
}
void searchName(Cret_b* books, int s, char* tmp)
{
	int num = 0;
	for (size_t i = 0; i < s; i++)
	{
		if (strcmp(tmp, books[i].name) == 0)
		{
			print(books[i]);
		}
		else
			num++;
	}
	if (num == 10)
	{
		cout << "Таких нету!:(\n";
	}
}
void sortAut(Cret_b* books, int s)
{
	for (int i = 0; i < s; i++)
	{
		Cret_b temp = books[i];
		int j;
		for (j = i - 1; j >= 0 && (strcmp(books[j].aut, temp.aut) > 0); j--)
		{
			books[j + 1] = books[j];
		}
		books[j + 1] = temp;
	}
}
void sortName(Cret_b* books, int s)
{
	for (int i = 0; i < s; i++)
	{
		Cret_b temp = books[i];
		int j;
		for (j = i - 1; j >= 0 && (strcmp(books[j].name, temp.name) > 0); j--)
		{
			books[j + 1] = books[j];
		}
		books[j + 1] = temp;
	}
}