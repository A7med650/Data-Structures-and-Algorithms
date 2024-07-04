#pragma once
#include <iostream>
#include "Node.h"
using namespace std;

class LinkedList
{
private:
	Node* head;
	Node* tail;
	int size;
public:
	LinkedList();
	void append(int element);
	void front(int element);
	void insert_at(int index, int element);
	void delete_at(int index);
	void display();
	int length();
	int search(int key);
	void reverse();
};

