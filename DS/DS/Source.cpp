#include <iostream>
#include "Array.h"
#include "LinkedList.h"

using namespace std;

int main()
{
	LinkedList linked;
	
	linked.append(1);
	linked.front(0);
	linked.append(2);
	linked.append(3);
	linked.insert_at(2, 120);
	linked.display();

	linked.reverse();
	linked.display();

	linked.delete_at(0);
	linked.delete_at(3);
	linked.display();


	linked.delete_at(linked.length() - 1);


	linked.front(1);
	linked.front(0);
	linked.display();


	cout << linked.search(121) << endl;
	cout << linked.search(2) << endl;

	return 0;
}