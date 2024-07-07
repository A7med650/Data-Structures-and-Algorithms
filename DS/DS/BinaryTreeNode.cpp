#include "BinaryTreeNode.h"

BinaryTreeNode::BinaryTreeNode(int element)
{
	data = element;
	right = left = nullptr;
}

int BinaryTreeNode::get_data()
{
	return this->data;
}

void BinaryTreeNode::set_data(int element)
{
	this->data = element;
}

void BinaryTreeNode::set_right(BinaryTreeNode* right_node)
{
	this->right = right_node;
}

BinaryTreeNode* BinaryTreeNode::get_right()
{
	return this->right;
}

void BinaryTreeNode::set_left(BinaryTreeNode* left_node)
{
	this->left = left_node;
}

BinaryTreeNode* BinaryTreeNode::get_left()
{
	return this->left;
}
