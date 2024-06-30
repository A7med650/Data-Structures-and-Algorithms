#pragma once
#include <iostream>
using namespace std;

class Array
{
private:
	int length, size;
	int* arr;
public:
	Array(int size);
	bool is_empty();
	int get_length();
	int get_size();
	void display();
	void append(int element);
	void insert(int element, int index);
	int max();
	int min();
	int sum();
	float avg();
	void reverse();
	void expand(int new_size);
	void remove_element(int element);
	void remove_index(int index);
	void sort();
	bool is_sorted();
	int search(int key);
	int binary_search(int key);
};

