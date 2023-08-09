#pragma once
#include <iostream>
#include "Node_List.h"

class Stack : public LinkedList
{
public:
	Stack() {}
	~Stack() {}

	void Push(int input)
	{
		Node* NodeP = new Node(input);
		if (mHead == nullptr)
		{
			mHead = mTail = NodeP;
		}
		else
		{
			mTail->SetNext(NodeP);
			NodeP->SetPrev(mTail);
			mTail = NodeP;
		}
	}
	void Pop()
	{
		if (mHead == nullptr)
		{
			std::cout << "Stack is already empty" << std::endl;
			return;
		}
		else if (mTail == mHead)
		{
			delete mTail;
			mTail = mHead = nullptr;
			std::cout << "stack is empty" << std::endl;
		}
		else {
			Node* temp;
			temp = mTail->GetPrev();
			mTail->SetPrev(nullptr);
			mTail->SetNext(nullptr);
			delete mTail;
			mTail = temp;
		}
	}
	void Print() override
	{
		if (mHead == nullptr)
		{
			std::cout << "stack is already empty" << std::endl;
			return;
		}

		Node* temp = mTail;
		while (temp != nullptr)
		{
			std::cout << temp->GetData() << std::endl;
			temp = temp->GetPrev();
		}
	}
	void DeleteAll()
	{
		Node* temp = mHead;
		Node* tempNext = mHead->GetNext();

		while (tempNext != nullptr)
		{
			tempNext = temp->GetNext();
			delete temp;
			temp = tempNext;
		}
		mHead = mTail = nullptr;
	}
};

class Queue : public LinkedList
{
public: 
	Queue() {}
	~Queue() {}
	
	void Enqueue(int input)
	{
		Node* NodeP = new Node(input);
		if (mHead == nullptr)
		{
			mHead = mTail = NodeP;
		}
		else
		{
			mTail->SetNext(NodeP);
			NodeP->SetPrev(mTail);
			mTail = NodeP;
		}
	}

	void Dequeue()
	{
		if (mHead == nullptr)
		{
			std::cout << "stack is already empty" << std::endl;
			return;
		}

		else if (mHead == mTail)
		{
			delete mHead;
			mHead = mTail = nullptr;
		}

		else {
			Node* temp = mHead->GetNext();
			delete mHead;
			mHead = temp;
		}
	}

	void Print() override
	{
		if (mHead == nullptr)
		{
			std::cout << "stack is already empty" << std::endl;
			return;
		}

		Node* temp = mHead;
		while (temp != nullptr)
		{
			std::cout << temp->GetData() << " ";
			temp = temp->GetNext();
		}
		std::cout << std::endl;
	}

	void DeleteAll()
	{
		Node* temp = mHead;
		Node* tempNext = mHead->GetNext();

		while (tempNext != nullptr)
		{
			tempNext = temp->GetNext();
			delete temp;
			temp = tempNext;
		}
		mHead = mTail = nullptr;
	}
	
};

