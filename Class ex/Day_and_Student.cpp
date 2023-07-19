#include "Day_and_Student.h"
#include <iostream>

void Student::Input()
{
	std::cout << std::endl << "-------------" << std::endl << "이름: ";
	std::cin >> mName;
	std::cout << std::endl << "번호: ";
	std::cin >> mNum;
	std::cout << std::endl << "점수: ";
	std::cin >> mScore;
	std::cout << std::endl << "-------------";
}


