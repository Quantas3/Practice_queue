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
	cout << "Нажмите любую клавишу";
	system("pause");
}

void List::Add_to_list()
{
	system("cls");
	cout << "Добавление элемента в очередь:\n";
	if (first != NULL)
	{
		last = first;
		while (last->next) 
			last = last->next;
		count++;
		list = new element;
		(*list).Number.Counter = count;
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
		cout << "Элемент успешно добавлен\n";
		system("pause");
	}
	else
	{
		system("cls");
		cout << "Добавление элемента в очередь:\n";
		count++;
		first = new element;
		(*first).Number.Counter = count;
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
		cout << "Элемент успешно добавлен\n";
		system("pause");
	}
}

void List::Delete_from_list()
{
	system("cls");
	cout << "Удаление элемента из очереди:\n";
	if (first != NULL)
	{
		list = first;
		first = first->next;
		printf("|%3d|%10s|%20s|%20s|%20s|\n", (*list).Number.Counter, list->Date, list->Author, list->Title, list->Text);
		delete list;
		printf("Элемент успешно удален.\n");
		system("pause");
	}
	else
	{
		printf("Список не содержет элементов!\n");
		system("pause");
	}

}