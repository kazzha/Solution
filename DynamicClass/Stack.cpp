#include <iostream>
#include "Stack.h"

void StackList::Push(int value)
{
	Stack* newStack = new Stack(value);
	if (mHead == nullptr) {
		mHead = mTail = newStack;
		mTail->mNext = nullptr;
	}
	else if (mTail != nullptr)
	{
		mTail->mNext = newStack;
		mTail = newStack;
	}

}

void StackList::Pop()
{
	if (mTail == nullptr)
	{
		std::cout << "Stack is already empty!" << std::endl;
		return;
	}
	else if (mHead == mTail)
	{
		mHead = mTail = nullptr;
		std::cout << "Stack is empty!" << std::endl;
	}
	else
	{
		Stack* temp{ mHead };
		while (temp->mNext != mTail)
		{
			temp = temp->mNext;
		}
		delete mTail->mNext, mTail;
		temp = mTail;

	}
}

void StackList::PrintStack()
{
	Stack* temp{ mHead };

	do 
	{
		std::cout << temp->mStack << std::endl;
		temp = temp->mNext;
	} while (temp != nullptr);
	
}