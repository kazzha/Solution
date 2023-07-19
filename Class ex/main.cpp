#include <iostream>
#include <algorithm>
#include <string>
#include "Day_and_Student.h"



int main()
{

	Day day(2023, 7, 19);

	int studentScore{};
	

	std::cout << "학생 수를 입력하세요 : ";
	std::cin >> studentScore;
	Student* students = new Student[studentScore];

	for (int i = 0; i < studentScore; i++)
	{
		students[i].Input();
	}
	
	std::cout << std::endl;

	for (int i = 0; i < studentScore; i++)
	{
		for (int j = i + 1; j < studentScore; j++)
		{
			if (students[i].mScore < students[j].mScore)
			{
				std::swap(students[i].mNum, students[j].mNum);
				std::swap(students[i].mScore, students[j].mScore);
				std::swap(students[i].mName, students[j].mName);
			}
		}
	}

	for (int i = 0; i < studentScore; i++)
	{
		std::cout << students[i].mScore << " " << students[i].mName << std::endl;
	}
	

	delete[] students;
}