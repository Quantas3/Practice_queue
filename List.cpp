#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	count = 0;
}

void List::Output_list() 
{
	system("cls");
	list = first;
	printf("\n+-----------------------------------------------------------------------------+\n");
	printf("| ID|   Date   |        Author      |        Title       |        Text        |\n");
	printf("+-----------------------------------------------------------------------------+\n");
	while (list)
	{
		printf("|%3d|%10s|%20s|%20s|%20s|\n", (*list).Number.Counter, list->Date, list->Author, list->Title, list->Text);
		list = list->next;
	}
	printf("+-----------------------------------------------------------------------------+\n");
	cout << "������� ����� �������";
	system("pause");
}

void List::Add_to_list()
{
	system("cls");
	cout << "���������� �������� � �������:\n";
	if (first != NULL)
	{
		last = first;
		while (last->next) 
			last = last->next;
		count++;
		list = new element;
		(*list).Number.Counter = count;
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
		cout << "������� ������� ��������\n";
		system("pause");
	}
	else
	{
		system("cls");
		cout << "���������� �������� � �������:\n";
		count++;
		first = new element;
		(*first).Number.Counter = count;
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
		cout << "������� ������� ��������\n";
		system("pause");
	}
}

void List::Delete_from_list()
{
	system("cls");
	cout << "�������� �������� �� �������:\n";
	if (first != NULL)
	{
		list = first;
		first = first->next;
		printf("|%3d|%10s|%20s|%20s|%20s|\n", (*list).Number.Counter, list->Date, list->Author, list->Title, list->Text);
		delete list;
		printf("������� ������� ������.\n");
		system("pause");
	}
	else
	{
		printf("������ �� �������� ���������!\n");
		system("pause");
	}

}