#include <iostream>
#include <stack>
#include <queue>
#include "BinaryTreeNode.h"

using namespace std;

#pragma once
class BST
{
private:
	BinaryTreeNode* root;
public:
	BST();
	void inasert(int element);
	void inorder();
	void preorder();
	void postorder();
	void level_order();
};

