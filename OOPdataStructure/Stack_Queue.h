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
			mTail->InputNext(NodeP);
			NodeP->InputPrev(mTail);
			mTail = NodeP;
		}
	}
	void Pop()
	{
		if (mHead == nullptr)
		{
			std::cout << "Stack is already empty" << std::endl;
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
			mTail->InputPrev(nullptr);
			mTail->InputNext(nullptr);
			delete mTail;
			mTail = temp;
		}
	}
	void Print() override
	{
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
		Node* tempNext;

		while (tempNext != nullptr)
		{
			tempNext = temp->GetNext();
			delete temp;
			temp = tempNext;
		}
	}
};

