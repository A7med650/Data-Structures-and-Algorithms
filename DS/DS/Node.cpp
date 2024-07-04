#include "Node.h"

Node::Node(int data)
{
	this->data = data;
	this->next = nullptr;
}

void Node::set_next(Node* new_node)
{
	this->next = new_node;
}

Node* Node::get_next()
{
	return this->next;
}

void Node::set_data(int element)
{
	this->data = element;
}

int Node::get_data()
{
	return this->data;
}
