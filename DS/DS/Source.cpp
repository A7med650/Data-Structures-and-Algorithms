#include <iostream>
#include "Array.h"
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

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

	cout << "stack" << endl;

	Stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	cout << stack.peek() << endl; //4 not remove
	cout << stack.pop() << endl; //4 remove
	cout << stack.peek() << endl; //3 not remove
	cout << stack.length() << endl; //3
	cout << stack.is_empty() << endl; //false
	stack.clear();
	stack.pop();
	cout << stack.is_empty() << endl; //true

	cout << "Queue" << endl;

	Queue queue;
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(4);
	cout << queue.dequeue() << endl; //1 remove
	cout << queue.front() << endl; // 2 not remove
	cout << queue.rear() << endl; //4 not remove
	cout << queue.is_empty() << endl; //0
	cout << queue.length() << endl; //3
	queue.clear();
	queue.dequeue();

	return 0;
}