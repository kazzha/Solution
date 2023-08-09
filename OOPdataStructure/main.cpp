#include <iostream>
#include "Node_List.h"
#include "Stack_Queue.h"

int main()
{
	Stack stack;
	stack.Push(100);
	stack.Push(200);
	stack.Print();
	stack.DeleteAll();
	stack.Print();

	Queue queue;
	queue.Enqueue(100);
	queue.Enqueue(200);
	queue.Print();
	queue.DeleteAll();
	queue.Print();
}