#include "prototype.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int s = 10, q;
	char ch[30], a;
	Cret_b* books = creat(s);
	books[0] = { "������_��", "������", "�������", "����������" },
		books[1] = { "����_���������������_�", "��������", "�������", "�������" },
		books[2] = { "Java_8", "�����", "Oracle Press", "�����������" },
		books[3] = { "Head_First_Java", "Sierra", "Oreilly", "�������" },
		books[4] = { "Google_Android", "���������", "���-���������", "�������" },
		books[5] = { "����������_�����������_��_�", "����������", "�����", "����������" },
		books[6] = { "Head_First Android", "��������", "Oreilly", "�������" },
		books[7] = { "����_���������������_�", "�����", "�������", "������" },
		books[8] = { "��������_�++", "��������", "����������", "����������" },
		books[9] = { "���_�_�++", "������", "����������", "����������" };
	print(books, s);
	do {
		cout << "�������� ����� �� ������ - 1\n����� - 2\n����� �� ������ - 3\n����� �� ����� - 4\n���������� �� ������ - 5\n���������� �� ����� 6\n"\
			"�������� ����� - 7\n������� ����� �� �������� - 8\n����� - 0\n";
		cout << "�������� �������: ";
		cin >> a;
		system("cls");
		cin.ignore();
		switch (a)
		{
		case '1':
		{
			cout << "�������� ����� �����: ";
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
			cout << "������� ��� ������: ";
			gets_s(ch, 30);
			searchAut(books, s, ch);
			break;
		}
		case '4':
		{
			cout << "������� �������� �����: ";
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
			cout << "������� �������� �����: ";
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