#include <string>
#pragma once

const int NAME_LENGTH{ 10 };

class Day
{
private:
	int year;
	int month;
	int day;

public:
	Day(int year, int month, int day) : year(year), month(month), day(day)
	{}
	~Day() {}
};

class Student
{
public:
	std::string mName;
	int mNum;
	int mScore;

public:
	Student() : mNum(), mScore(), mName{}
	{}
	~Student(){}

	void Input();
};

