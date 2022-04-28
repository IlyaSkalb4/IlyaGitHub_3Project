#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

struct Cret_b
{
	char name[30];
	char aut[30];
	char stud[30];
	char genre[30];
};

void del(Cret_b* q);
Cret_b* creat(int s);
Cret_b input();
Cret_b* add(Cret_b* books, int& s, Cret_b book);
Cret_b* delet(Cret_b* books, int& s, char* name);
void print(Cret_b book);
void print(Cret_b* book, int s);
void coppy(char* book);
void searchAut(Cret_b* books, int s, char* tmp);
void searchName(Cret_b* books, int s, char* tmp);
void sortAut(Cret_b* books, int s);
void sortName(Cret_b* books, int s);