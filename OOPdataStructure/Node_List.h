#pragma once
#include <iostream>

class Node
{
protected:
	int mData;
	Node* mNext;
	Node* mPrev;

public:
	Node() : mData(0), mNext(nullptr) { }
	Node(int input) : mData(input) , mNext(nullptr) {}
	~Node() {}
	void InputNext(Node* input)
	{
		mNext = input;
	}
	void InputPrev(Node* input)
	{
		mPrev = input;
	}
	void DeleteNext()
	{
		mNext = nullptr;
	}
	void DeletePrev()
	{
		mPrev = nullptr;
	}
	int GetData()
	{
		return mData;
	}
	Node* GetNext()
	{
		return mNext;
	}
	Node* GetPrev()
	{
		return mPrev;
	}
};

class LinkedList : public Node
{
protected:
	Node* mHead;
	Node* mTail;

public:
	LinkedList() : mHead(nullptr) , mTail(nullptr) { }
	~LinkedList() {}

   virtual void Print()
    {
		std::cout << mData << " ";
	}
};

