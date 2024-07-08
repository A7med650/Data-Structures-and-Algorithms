#include "BST.h"

BST::BST()
{
	root = nullptr;
}

void BST::inasert(int element)
{
	BinaryTreeNode* temp = root;
	BinaryTreeNode* new_node = new BinaryTreeNode(element);
	if (temp == nullptr)
	{
		root = new_node;
	}
	else
	{
		while (true)
		{
			if (temp->get_data() < element)
			{
				if (temp->get_right() == nullptr)
				{
					temp->set_right(new_node);
					break;
				}
				temp = temp->get_right();
			}
			else
			{
				if (temp->get_left() == nullptr)
				{
					temp->set_left(new_node);
					break;
				}
				temp = temp->get_left();
			}
		}
	}
}

void BST::inorder()
{
	BinaryTreeNode* current = root;
	stack<BinaryTreeNode*>s;
	
	while (current != nullptr || !s.empty())
	{
		if (current != nullptr)
		{
			s.push(current);
			current = current->get_left();
		}
		else
		{
			BinaryTreeNode* temp = s.top();
			s.pop();
			cout << temp->get_data() << " ";
			current = temp->get_right();
		}
	}
	cout << endl;
}

void BST::preorder()
{
	BinaryTreeNode* current = root;
	stack<BinaryTreeNode*>s;

	while (current != nullptr || !s.empty())
	{
		if (current != nullptr)
		{
			cout << current->get_data() << " ";
			s.push(current);
			current = current->get_left();
		}
		else
		{
			BinaryTreeNode* temp = s.top();
			s.pop();
			current = temp->get_right();
		}
	}
	cout << endl;
}

void BST::postorder()
{
	BinaryTreeNode* current = root;
	stack<BinaryTreeNode*>s, s2;

	while (current != nullptr || !s.empty())
	{
		if (current != nullptr)
		{
			s.push(current);
			current = current->get_left();
		}
		else
		{
			BinaryTreeNode* temp = s.top();
			current = temp->get_right();
			if (current == nullptr || (!s2.empty() && s2.top() == temp))
			{
				current = nullptr;
				if (!s2.empty() && s2.top() == temp)
					s2.pop();
				s.pop();
				cout << temp->get_data() << " ";
			}
			else
			{
				s2.push(s.top());
			}
		}
	}
	cout << endl;
}

void BST::level_order()
{
	BinaryTreeNode* current = root;
	queue<BinaryTreeNode*>q;
	if (current != nullptr)
		q.push(current);
	while (!q.empty())
	{
		cout << q.front()->get_data() << " ";
		if(q.front()->get_left())
			q.push(q.front()->get_left());
		if(q.front()->get_right())
			q.push(q.front()->get_right());
		q.pop();
	}
	cout << endl;
}

bool BST::search(int key)
{
	BinaryTreeNode* current = root;
	while (current != nullptr)
	{
		if (current->get_data() == key)
			return true;
		else if (current->get_data() > key)
			current = current->get_left();
		else
			current = current->get_right();
	}
	return false;
}

void BST::delete_node(int key)
{
	BinaryTreeNode* prev = nullptr;
	BinaryTreeNode* current = root;
	while (current != nullptr)
	{
		if (current->get_data() == key)
		{
			// Case 1. Delete a Leaf Node in BST
			if (current->get_left() == nullptr && current->get_right() == nullptr)
			{
				if (current->get_data() < prev->get_data())
					prev->set_left(nullptr);
				else
					prev->set_right(nullptr);
			}

			// Case 2. Delete a Node with Single Child in BST
			else if (current->get_left() == nullptr || current->get_right() == nullptr)
			{
				prev = current;
				if (current->get_left() != nullptr)
				{
					current = current->get_left();
					prev->set_data(current->get_data());
					prev->set_left(nullptr);
				}
				else
				{
					current = current->get_right();
					prev->set_data(current->get_data());
					prev->set_right(nullptr);
				}
			}

			// Case 3. Delete a Node with Both Children in BST
			else
			{
				bool check = false;
				BinaryTreeNode* temp = current;
				prev = current;
				current = current->get_right();
				while (current->get_left() != nullptr)
				{
					check = true;
					prev = current;
					current = current->get_left();
				}
				temp->set_data(current->get_data());
				if (check)
					prev->set_left(current->get_right());
				else
					prev->set_right(current->get_right());
			}

			delete current;
			break;
		}
		else if (current->get_data() > key)
		{
			prev = current;
			current = current->get_left();
		}
		else
		{
			prev = current;
			current = current->get_right();
		}
	}
}
