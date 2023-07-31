#pragma once

#include <iostream>
#include <string>


class String
{
private:
	int mLength;
	char* mString;

public:
	// 1번
	String() : String("") {}

	// 2번
	String(int blank) : mLength(blank) , mString(new char[mLength+1]) 
	{
		for (int i = 0; i < blank; i++)
		{
			mString[i] = ' ';
	    }
		mString[blank] = '\0';
	}
	
	// 3번
	String(const char str[]) : mLength((int)strlen(str)), mString(new char[mLength + 1])
	{
		strcpy_s(mString, mLength + 1, str);

	}

	// 4번
	String(const String& target) : mLength(target.mLength)
	{
		mString = new char[mLength + 1] {};
		strcpy_s(mString, mLength + 1, target.mString);
	}

	// 5번
	String operator + (const String& target)
	{
		int CombineLength = mLength + target.mLength;
		String temp;
		temp.mLength = CombineLength;
		temp.mString = new char[CombineLength + 1];

		strcpy_s(temp.mString, mLength+1, mString);
		strncat_s(temp.mString, CombineLength + 1, target.mString, target.mLength);

		temp.mString[CombineLength] = '\0';
		
		return temp;
	}

	String& operator += (const String& target)
	{
	    String temp = (*this);
		mLength += target.mLength;
		delete[] mString;
		mString = new char[mLength+1];

		strcpy_s(mString, temp.mLength+1, temp.mString);
		strncat_s(mString, mLength + 1, target.mString, target.mLength);

		return *this;
	}

	// 6번
	char& operator [] (int index) 
	{
		return mString[index];
	}

    // 7번
	String& operator = (const String& target)
	{
		if (this != &target) {
			delete[] mString;
			mString = new char[target.mLength + 1];
			strcpy_s(mString, target.mLength + 1, target.mString);

			return *this;
		}
		if (this == &target)
		{
			return *this;
		}
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