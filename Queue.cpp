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
		cout << "��������� �������:\n";
		cout << "F1 ���������� �������� � �������\n";
		cout << "F2 �������� �������� �� �������\n";
		cout << "F3 ����� �������\n";
		cout << "F4 �����\n";
		cout << "�������� ����� ������, ��� ������ ����������� ������� F1,F2,F3,F4,F5\n";
		key_choice = _getch();
		switch (key_choice)
		{
		case 59: Enqueue(); break;
		case 60: Dequeue();break;
		case 61: Output();break;
		case 62: break;
		}
		if (key_choice == 62) break;
	} while (1);
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