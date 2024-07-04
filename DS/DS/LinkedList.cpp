#include "LinkedList.h"

LinkedList::LinkedList()
{
	this->head = nullptr;
	this->tail = nullptr;
	this->size = 0;
}

void LinkedList::append(int element)
{
	Node* new_node = new Node(element);
	if (size == 0)
	{
		this->head = new_node;
		this->tail = new_node;
	}
	else
	{
		this->tail->set_next(new_node);
		this->tail = new_node;
	}
	size++;
}

void LinkedList::front(int element)
{
	Node* new_node = new Node(element);
	Node* temp = head;
	new_node->set_next(head);
	head = new_node;
	size++;
}

void LinkedList::insert_at(int index, int element)
{
	if (index<0 || index>size)
	{
		cout << "please, Enter valid index" << endl;
		return;
	}
	if (index == 0)
	{
		front(element);
		return;
	}
	else if (index == size)
	{
		append(element);
		return;
	}

	Node* new_node = new Node(element);
	Node* temp = head;

	for (int i = 0; i < index - 1; i++)
		temp = temp->get_next();
	new_node->set_next(temp->get_next());
	temp->set_next(new_node);
	
	size++;
}

void LinkedList::delete_at(int index)
{
	if (index<0 || index>size)
	{
		cout << "please, Enter valid index" << endl;
		return;
	}

	Node* temp = head;
	if (index == 0)
	{
		head = head->get_next();
		delete temp;
	}
	else
	{
		for (int i = 0; i < index - 1; i++)
			temp = temp->get_next();
		Node* del = temp->get_next();
		temp->set_next(del->get_next());
		delete del;
		if (size == index + 1)
			tail = temp;
	}
	size--;
}

void LinkedList::display()
{
	Node* temp = this->head;
	for (int i = 0; i < size; i++)
	{
		cout << temp->get_data() << " ";
		temp = temp->get_next();
	}
	cout << endl;
}

int LinkedList::length()
{
	return this->size;
}

int LinkedList::search(int key)
{
	Node* temp = head;
	for (int i = 0; i < size; i++)
	{
		if (temp->get_data() == key)
			return i;
		temp = temp->get_next();
	}
	return -1;
}

void LinkedList::reverse()
{
	Node* current = head;
	Node* next = nullptr;
	Node* prev = nullptr;
	for (int i = 0; i < size; i++)
	{
		next = current->get_next();
		current->set_next(prev);
		prev = current;
		current = next;
	}
	head = prev;
}
