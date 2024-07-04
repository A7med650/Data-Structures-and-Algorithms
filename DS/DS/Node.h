#pragma once
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

