#include "Stack.h"

Stack::Stack()
{
	size = 0;
	top = nullptr;
}

Stack::~Stack()
{
	clear();
}

void Stack::push(int element)
{
	Node* new_node = new Node(element);

	new_node->set_next(top);
	top = new_node;

	size++;
}

int Stack::pop()
{
	if (is_empty())
	{
		cout << "You can't pop from an empty stack!!" << endl;
		return -1;
	}

	int data = top->get_data();
	Node* temp = top;
	top = top->get_next();
	delete temp;

	size--;
	
	return data;
}

int Stack::peek()
{
	if (is_empty())
	{
		cout << "You can't pop from an empty stack!!" << endl;
		return -1;
	}
	return top->get_data();
}

int Stack::length()
{
	return size;
}

bool Stack::is_empty()
{
	return size == 0;
}

void Stack::clear()
{
	while (!is_empty())
		pop();
	size == 0;
}
