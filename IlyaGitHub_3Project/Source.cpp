#include "prototype.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int s = 10, q;
	char ch[30], a;
	Cret_b* books = creat(s);
	books[0] = { "Ремонт_ПК", "Мюллер", "Вильямс", "Справочник" },
		books[1] = { "Язык_програмирования_С", "Керниган", "Вильямс", "Учебник" },
		books[2] = { "Java_8", "Шилдт", "Oracle Press", "Руководство" },
		books[3] = { "Head_First_Java", "Sierra", "Oreilly", "Учебник" },
		books[4] = { "Google_Android", "Голощапов", "БХВ-Петербург", "Учебник" },
		books[5] = { "Справочное_руководство_по_С", "Страустрап", "Бином", "Справочник" },
		books[6] = { "Head_First Android", "Гриффитс", "Oreilly", "Учебник" },
		books[7] = { "Язык_програмирования_С", "Прата", "Вильямс", "Лекции" },
		books[8] = { "Стандарт_С++", "Чупринов", "Интерстрон", "Справочник" },
		books[9] = { "Ява_и_С++", "Мартин", "Диалектика", "Справочник" };
	print(books, s);
	do {
		cout << "Изменить книгу по номеру - 1\nВывод - 2\nПоиск по автору - 3\nПоиск по имени - 4\nСортировка по автору - 5\nСортировка по имени 6\n"\
			"Добавить книгу - 7\nУдалить книгу по названию - 8\nВыход - 0\n";
		cout << "Выберите вариант: ";
		cin >> a;
		system("cls");
		cin.ignore();
		switch (a)
		{
		case '1':
		{
			cout << "Выберите номер книги: ";
			cin >> q;
			books[q - 1] = input();
			break;
		}
		case '2':
		{
			print(books, s);
			break;
		}
		case '3':
		{
			cout << "Введите имя автора: ";
			gets_s(ch, 30);
			searchAut(books, s, ch);
			break;
		}
		case '4':
		{
			cout << "Введите название книги: ";
			gets_s(ch, 30);
			searchName(books, s, ch);
			break;
		}
		case '5':
		{
			sortAut(books, s);
			break;
		}
		case '6':
		{
			sortName(books, s);
			break;
		}
		case '7':
		{
			Cret_b book = input();
			books = add(books, s, book);
			break;
		}
		case '8':
		{
			cout << "Введите название книги: ";
			gets_s(ch, 30);
			books = delet(books, s, ch);
			break;
		}
		default:
			if (a != '0')
			{
				cout << "invalid\n";
			}
		}
	} while (a != '0');
	del(books);
	return 0;
}