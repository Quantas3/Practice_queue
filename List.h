#pragma once

struct element
{
	int Counter;
	char Date[10];
	char Author[20];
	char Title[20];
	char Text[20];
	element *next;
};
class List
{
public:
	void Create_list();
	void Output_list();
	void Add_to_list();
	void Delete_from_list();
private:
	int flag;
	element *first, *last, *list;
	int count;
};