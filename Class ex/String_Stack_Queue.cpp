#include <iostream>
#include "String_Stack_Queue.h"

void Stack::PUSH(int stack)
{
	if (mTop >= mSize - 1)
	{

		std::cout << "Stack is full" << std::endl;
		return;
	}

	mP[++mTop] = stack;

	if (mTop >= mSize - 1)
	{

		std::cout << "Stack is full" << std::endl;
		return;
	}
}

void Stack::POP()
{
	if (mTop < 0)
	{
		std::cout << "Stack is already empty!!" << std::endl;
		return;
	}

	--mTop;


	if (mTop < 0)
	{
		std::cout << "Stack is empty" << std::endl;
	}
}

void Stack::Print()
{
	
	std::cout << "-----STACK-----" << std::endl;

	for (int i = mTop; i >= 0; i--)
	{
		std::cout << mP[i] << std::endl;
	}

}