#include "List.h"
#include <iostream>
using namespace std;

void List::Create_list()
{
	system("cls");
	count = 1;
	first = new element;
	(*first).Counter = count;
	cout << "Введите дату\n";
	cin >> first->Date;
	cout << "Введите автора\n";
	cin >> first->Author;
	cout << "Введите заголовок\n";
	cin >> first->Title;
	cout << "Введите текст\n";
	cin >> first->Text;
	first->next = NULL;
	last = first;
	flag = 1;
	while (flag)
	{
		system("cls");
		cout << "\tПродолжить?\t\n Да-1 / Нет-0\n"; cin >> flag;
		if (flag == 1)
		{
			count++;
			list = new element;
			(*list).Counter = count;
			cout << "Введите вид животного\n";
			cin >> list->Date;
			cout << "Введите имя животного\n";
			cin >> list->Author;
			cout << "Введите возраст животного\n";
			cin >> list->Title;
			cout << "Введите питание животного\n";
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
	printf("| № |   Date   |        Author      |        Title       |        Text        |\n");
	printf("+-----------------------------------------------------------------------------+\n");
	while (list)
	{
		printf("|%3d|%10s|%20s|%20s|%20s|\n", (*list).Counter = count, list->Date, list->Author, list->Title, list->Text);
		list = list->next;
	}
	printf("+-----------------------------------------------------------------------------+\n");
	cout << "Нажмите любую клавишу";
	system("pause");
}

void List::Add_to_list()
{
	system("cls");
	count++;
	last = first;
	while (last->next) last = last->next;
	list = new element;
	cout << "Введите дату\n";
	cin >> list->Date;
	cout << "Введите автора\n";
	cin >> list->Author;
	cout << "Введите заголовок\n";
	cin >> list->Title;
	cout << "Введите текст\n";
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
		printf("Элемент успешно удален.\n");
		system("pause");
	}
	else
	{
		printf("Список не содержет элементов!\n");
	}

}