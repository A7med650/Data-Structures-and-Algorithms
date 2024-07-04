#include "Node.h"
#include <iostream>

using namespace std;

#pragma once
class Queue
{
private:
	int size;
	Node* head;
	Node* tail;
public:
	Queue();
	~Queue();
	void enqueue(int element);
	int dequeue();
	void clear();
	int front();
	int rear();
	int length();
	bool is_empty();
};

