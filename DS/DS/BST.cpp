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
