#pragma once
#include <iostream>

class Queue
{
	friend class QueueList;
private:
	int mQueue;
	Queue* mNext;


public:
	Queue(int value) : mQueue(value), mNext(nullptr) {	}
	~Queue() { delete mNext; }


};

class QueueList
{
private:
	Queue* mHead;
	Queue* mTail;

public:
	QueueList() : mHead(nullptr), mTail(nullptr) {}
	~QueueList() {
		delete mHead, mTail;
	}

	void Enqueue(int value);
	void Dequeue();
	void PrintQueue();
};