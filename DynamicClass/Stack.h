#pragma once
#include <iostream>

class Stack
{
	friend class StackList;
private:
	int mStack;
	Stack* mNext;
	

public:
	Stack(int value) : mStack(value), mNext(nullptr) {	}
	~Stack() { delete mNext; }

	
};

class StackList
{
private:
	Stack* mHead;
	Stack* mTail;

public:
   StackList() : mHead(nullptr) , mTail(nullptr) {}
   ~StackList() { 
	   delete mHead, mTail; }

   void Push(int value);
   void Pop();
   void PrintStack();
};