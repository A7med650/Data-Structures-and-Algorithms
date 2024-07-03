#pragma once
#include <iostream>
using namespace std;

class Node
{
private:
	int data;
	Node* next;
public:
	Node(int data);
	void set_next(Node* new_node);
	Node* get_next();
	void set_data(int element);
	int get_data();
};


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

