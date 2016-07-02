#pragma once

struct info
{
	int Counter;
};

struct element
{
	info Number;
	char Date[10];
	char Author[20];
	char Title[20];
	char Text[20];
	element *next;
};

class List
{
public:
	void Output_list();
	void Add_to_list();
	void Delete_from_list();
	List();
	int count;
	element *first, *last, *list;
private:
	int flag;
	
};