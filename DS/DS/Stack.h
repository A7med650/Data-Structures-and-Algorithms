#include<iostream>
#include "Node.h"

using namespace std;

#pragma once


class Stack
{
private:
	int size;
	Node* top;
public:
	Stack();
	~Stack();
	void push(int element);
	int pop();
	int peek();
	int length();
	bool is_empty();
	void clear();

};

