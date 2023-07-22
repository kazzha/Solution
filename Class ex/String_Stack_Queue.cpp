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

void Queue::Enqueue(int value)
{
	if (mTail == -1)
	{
		mP[++mTail] = value;
		return;
	}

	else if ((mTail + 1) % mQueueSize == mHead)
	{
		std::cout << "Queue is Full!!" << std::endl;
		return;
	}

	mTail = (mTail + 1) % mQueueSize;
	mP[mTail] = value;

}

void Queue::Dequeue()
{
	if (mTail < 0)
	{
		std::cout << "Queue is already empty!!" << std::endl;
		return;
	}

	if (mTail == mHead) {
		std::cout << "Queue is empty!!" << std::endl;
		mHead = 0;
		mTail = -1;
		return;
	}

	mHead = (mHead + 1) % mQueueSize;
}

void Queue::Print()
{
	std::cout << "-----QUEUE-----" << std::endl;

	for (int i = mHead; i <= mTail; i++)
	{
		std::cout << mP[i] << " ";
	}

	std::cout << std::endl;
}