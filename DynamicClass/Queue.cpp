#include <iostream>
#include "Queue.h"

void QueueList::Enqueue(int value)
{
	Queue* newQueue = new Queue(value);
	if (mHead == nullptr) {
		mHead = mTail = newQueue;
		mTail->mNext = nullptr;
	}
	else if (mTail != nullptr)
	{
		mTail->mNext = newQueue;
		mTail = newQueue;
	}

}

void QueueList::Dequeue()
{
	if (mTail == nullptr)
	{
		std::cout << "Queue is already empty!" << std::endl;
		return;
	}
	else if (mHead == mTail)
	{
		mHead = mTail = nullptr;
		std::cout << "Queue is empty!" << std::endl;
	}
	else
	{
		Queue* temp{ mHead->mNext };
		delete mHead, mHead->mNext;
		mHead = temp;
	}
}

void QueueList::PrintQueue()
{
	Queue* temp{ mHead };

	do
	{
		std::cout << temp->mQueue << " ";
		temp = temp->mNext;
	} while (temp != nullptr);

}