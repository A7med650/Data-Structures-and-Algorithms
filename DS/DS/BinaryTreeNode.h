#pragma once
class BinaryTreeNode
{
private:
	int data;
	BinaryTreeNode* right, * left;
public:
	BinaryTreeNode(int element);
	int get_data();
	void set_data(int element);
	void set_right(BinaryTreeNode* right_node);
	BinaryTreeNode* get_right();
	void set_left(BinaryTreeNode* left_node);
	BinaryTreeNode* get_left();
};

