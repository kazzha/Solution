#include "Day_and_Student.h"
#include <iostream>

void Student::Input()
{
	std::cout << std::endl << "-------------" << std::endl << "�̸�: ";
	std::cin >> mName;
	std::cout << std::endl << "��ȣ: ";
	std::cin >> mNum;
	std::cout << std::endl << "����: ";
	std::cin >> mScore;
	std::cout << std::endl << "-------------";
}


