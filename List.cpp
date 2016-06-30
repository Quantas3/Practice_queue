#include "List.h"
#include <iostream>
using namespace std;

void List::Create_list()
{
	system("cls");
	count = 1;
	first = new element;
	(*first).Counter = count;
	cout << "������� ����\n";
	cin >> first->Date;
	cout << "������� ������\n";
	cin >> first->Author;
	cout << "������� ���������\n";
	cin >> first->Title;
	cout << "������� �����\n";
	cin >> first->Text;
	first->next = NULL;
	last = first;
	flag = 1;
	while (flag)
	{
		system("cls");
		cout << "\t����������?\t\n ��-1 / ���-0\n"; cin >> flag;
		if (flag == 1)
		{
			count++;
			list = new element;
			(*list).Counter = count;
			cout << "������� ��� ���������\n";
			cin >> list->Date;
			cout << "������� ��� ���������\n";
			cin >> list->Author;
			cout << "������� ������� ���������\n";
			cin >> list->Title;
			cout << "������� ������� ���������\n";
			cin >> list->Text;
			list->next = NULL;
			last->next = list;
			last = list;
		}
	}
	system("pause");
}

void List::Output_list() 
{
	system("cls");
	list = first;
	printf("\n+-----------------------------------------------------------------------------+\n");
	printf("| � |   Date   |        Author      |        Title       |        Text        |\n");
	printf("+-----------------------------------------------------------------------------+\n");
	while (list)
	{
		printf("|%3d|%10s|%20s|%20s|%20s|\n", (*list).Counter = count, list->Date, list->Author, list->Title, list->Text);
		list = list->next;
	}
	printf("+-----------------------------------------------------------------------------+\n");
	cout << "������� ����� �������";
	system("pause");
}

void List::Add_to_list()
{
	system("cls");
	count++;
	last = first;
	while (last->next) last = last->next;
	list = new element;
	cout << "������� ����\n";
	cin >> list->Date;
	cout << "������� ������\n";
	cin >> list->Author;
	cout << "������� ���������\n";
	cin >> list->Title;
	cout << "������� �����\n";
	cin >> list->Text;
	list->next = NULL;
	last->next = list;
	system("pause");
}

void List::Delete_from_list()
{
	system("cls");
	if (first != NULL)
	{
		list = first;
		first = first->next;
		printf("|%3d|%10s|%20s|%20s|%20s|\n", (*list).Counter = count, list->Date, list->Author, list->Title, list->Text);
		delete list;
		printf("������� ������� ������.\n");
		system("pause");
	}
	else
	{
		printf("������ �� �������� ���������!\n");
	}

}