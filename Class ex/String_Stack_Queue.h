#pragma once

#include <iostream>
#include <string>


class String
{
private:
	int mLength;
	char* mString;

public:
	String(const char str[]) : mLength((int)strlen(str)), mString(new char[mLength + 1])
	{
		strcpy_s(mString, mLength +1, str);
		
	}

	~String()
	{
		delete[] mString;
	}

	void Print()
	{
		for (int i = 0; i < mLength + 1; i++)
		{
			std::cout << mString[i];
		}
	}
};


class Stack
{
private:
	int mTop;
	int* mP;
	int mSize;

public:
	Stack(int size) : mTop(-1), mSize(size) , mP(new int[mSize]{})
	{
		std::cout << "[1]PUSH" << std::endl << "[2]POP" << std::endl << "[3]QUIT" << std::endl;
	}

	void PUSH(int stack);
	void POP();
	void Print();

	~Stack()
	{
		delete[] mP;
	}
};

class Queue
{
private:
	int mHead;
	int mTail;
	int mQueueSize;
	int* mP;

public:
	Queue(int size) : mHead(0), mTail(-1), mQueueSize(size), mP(new int[mQueueSize]{})
	{
		std::cout << "[1]ENQUEUE" << std::endl << "[2]DEQUEUE" << std::endl << "[3]QUIT" << std::endl;
	}

	void Enqueue(int value);
	void Dequeue();
	void Print();
	
	~Queue()
	{
		delete[] mP;
	}
};