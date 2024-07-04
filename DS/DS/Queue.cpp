#include "Queue.h"

Queue::Queue()
{
	size = 0;
	head = tail = nullptr;
}

Queue::~Queue()
{
	clear();
}

void Queue::enqueue(int element)
{
	Node* new_node = new Node(element);

	if (is_empty())
	{
		head = tail = new_node;
	}
	else
	{
		tail->set_next(new_node);
		tail = new_node;
	}

	size++;
}

int Queue::dequeue()
{
	if (is_empty())
	{
		cout << "You can't dequeue from an empty Queue!!" << endl;
		return -1;
	}

	Node* temp = head;
	int data = temp->get_data();
	head = head->get_next();
	size--;
	delete temp;

	return data;
}

void Queue::clear()
{
	while (!is_empty())
		dequeue();
	size == 0;
}

int Queue::front()
{
	if (is_empty())
	{
		cout << "You can't dequeue from an empty Queue!!" << endl;
		return -1;
	}
	return head->get_data();
}

int Queue::rear()
{
	if (is_empty())
	{
		cout << "You can't dequeue from an empty Queue!!" << endl;
		return -1;
	}
	return tail->get_data();
}

int Queue::length()
{
	return size;
}

bool Queue::is_empty()
{
	return size == 0;
}
