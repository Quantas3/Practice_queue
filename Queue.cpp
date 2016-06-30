#include "List.h"
#include "Queue.h"
#include <iostream>
#include <conio.h>
using namespace std;

List List_object; // maybe something is wrong here

void Queue::Queue_menu()
{
	setlocale(LC_ALL, "RUS");
	do
	{
		system("cls");
		cout << "Обработка очереди:\n";
		cout << "F1 Создание очереди  ";
		cout << "F2 Добавление элемента в очередь  ";
		cout << "F3 Удалить элемент из очереди  ";
		cout << "F4 Вывод очереди  ";
		cout << "F5 Выход  \n";
		cout << "Выберите номер пункта, для выбора используйте клавиши F1,F2,F3,F4,F5\n";
		key_choice = _getch();
		switch (key_choice)
		{
		case 59: Create_queue(); break;
		case 60: Enqueue();break;
		case 61: Dequeue();break;
		case 62: Output();break;
		case 63: break;
		}
		if (key_choice == 63) break;
	} while (1);
}

void Queue::Create_queue()
{
	List_object.Create_list();
}

void Queue::Enqueue()
{
	List_object.Add_to_list();
}

void Queue::Dequeue()
{
	List_object.Delete_from_list();
}

void Queue::Output()
{
	List_object.Output_list();
}