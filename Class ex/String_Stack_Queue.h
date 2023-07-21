#pragma once

#include <iostream>
#include <string>

/*
class String
{
private:
	int mlength;
	char* mString;

public:
	String(const char str[]) : mlength((int)strlen(str)), mString(new char[mlength + 1])
	{
		char* strcpy_s(mString, str[]);
		std::cout << mString;
	}

	~String()
	{
		delete[] mString;
	}

};
*/

class Stack
{
private:
	int mTop;
	int* mP;
	int mSize;

public:
	Stack(int size) : mTop(-1), mSize(size) , mP(new int[mSize]{})
	{
		std::cout << "[1]PUSH(number)" << std::endl << "[2]POP" << std::endl << "[3]QUIT" << std::endl;
	}

	void PUSH(int stack);
	void POP();
	void Print();

	~Stack()
	{
		delete[] mP;
	}
};