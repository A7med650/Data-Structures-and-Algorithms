#include "Array.h"

Array::Array(int size)
{
	this->size = size;
	arr = new int[size];
	length = 0;
}

bool Array::is_empty()
{
	if (length == 0)
		return true;
	return false;
}

int Array::get_length()
{
	return length;
}

int Array::get_size()
{
	return size;
}

void Array::display()
{
	for (int i = 0; i < length; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void Array::append(int element)
{
	if (length < size)
	{
		arr[length] = element;
		length++;
	}
	else
	{
		cout << "Please, Expand array because the array is completed" << endl;
	}
}

void Array::insert(int element, int index)
{
	if (index <= 0)
	{
		cout << "Please, Enter index greater than 1" << endl;
		return;
	}
	index--;
	if (index < size && length < size && index <= length)
	{
		for (int i = length; i > index; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[index] = element;
		length++;
	}
	else if (index > length)
	{
		cout << "array length = " << length << endl;
	}
	else
	{
		cout << "Please, Expand array because the array is completed" << endl;
	}
}

int Array::max()
{
	if (is_empty())
	{
		cout << "the array is empty" << endl;
		return -1;
	}
	int maximum = arr[0];
	for (int i = 1; i < length; i++)
	{
		if (maximum < arr[i])
			maximum = arr[i];
	}
	return maximum;
}

int Array::min()
{
	if (is_empty())
	{
		cout << "the array is empty" << endl;
		return -1;
	}
	int minimum = arr[0];
	for (int i = 1; i < length; i++)
	{
		if (minimum > arr[i])
			minimum = arr[i];
	}
	return minimum;
}

int Array::sum()
{
	if (is_empty())
	{
		cout << "the array is empty" << endl;
		return -1;
	}
	int s = 0;
	for (int i = 0; i < length; i++)
		s += arr[i];
	return s;
}

float Array::avg()
{
	if (is_empty())
	{
		cout << "the array is empty" << endl;
		return -1;
	}
	float a = 0;
	for (int i = 0; i < length; i++)
		a += arr[i];
	return (float)a/length;
}

void Array::reverse()
{
	if (is_empty())
	{
		cout << "the array is empty" << endl;
		return;
	}
	for (int i = 0; i < length / 2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[length - i - 1];
		arr[length - i - 1] = temp;
	}
}

void Array::expand(int new_size)
{
	if (new_size > size)
	{
		int* arr2 = new int[new_size];
		for (int i = 0; i < length; i++)
		{
			arr2[i] = arr[i];
		}
		delete[] arr;
		arr = arr2;
		arr2 = NULL;
		size = new_size;
	}
}

void Array::remove_element(int element)
{
	int index = -1;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == element)
		{
			index = i;
			break;
		}
	}
	if (index != -1)
	{
		for (int i = index + 1; i < length; i++)
		{
			arr[i - 1] = arr[i];
		}
		length--;
	}
}

void Array::remove_index(int index)
{
	if (index <= 0)
	{
		cout << "Please, Enter index greater than 1" << endl;
		return;
	}
	for (int i = index; i < length; i++)
	{
		arr[i - 1] = arr[i];
	}
	length--;
}

void Array::sort()
{
	if (is_empty())
	{
		cout << "the array is empty" << endl;
		return;
	}
	for (int i = 0; i < length; i++)
	{
		int minimum = arr[i], index = i;
		for (int j = i+1; j < length; j++)
		{
			if (minimum > arr[j])
			{
				minimum = arr[j];
				index = j;
			}
		}
		arr[index] = arr[i];
		arr[i] = minimum;
	}
}

bool Array::is_sorted()
{
	if (is_empty())
	{
		cout << "the array is empty" << endl;
		return true;
	}
	for (int i = 1; i < length; i++)
	{
		if (arr[i - 1] <= arr[i])
			continue;
		else
			return false;
	}
	return true;
}

int Array::search(int key)
{
	for (int i = 0; i < length; i++)
		if (arr[i] == key)
			return i + 1;
	return -1;
}

int Array::binary_search(int key)
{
	if (is_sorted())
	{
		int low = 0, high = length, mid;
		while (low <= high)
		{
			mid = (low + high) / 2;
			if (arr[mid] == key)
				return mid + 1;
			else if (arr[mid] < key)
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return -1;
}
