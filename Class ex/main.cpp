#include <iostream>
#include <algorithm>
#include <string>
#include "Day_and_Student.h"
#include "String_Stack_Queue.h"

/*
int main()
{

	Day day(2023, 7, 19);

	int studentScore{};
	

	std::cout << "�л� ���� �Է��ϼ��� : ";
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

*/

int main()
{
	String s4("����Ƽ���� �̰� ������ ����");
	String empty("�� �������Դϴ�");
	String s5("�ù�");
	s5 += s4;
	s5.Print();
}
/*
enum Command
{
	PUSH = 1,
	POP = 2,
	QUIT = 3
};


int main()
{
	int stackSize{}, y{};

	std::cout << "STACK�� ũ�⸦ �Է��ϼ��� : ";
	std::cin >> stackSize;

	Stack myStack(stackSize);

	while (y != 3)
	{
		std::cin >> y;

		switch (y)
		{
			{
		case PUSH:
			int value{};
			std::cout << "value >";
			std::cin >> value;
			myStack.PUSH(value);
			myStack.Print();
			break;
			}
		case POP:
			myStack.POP();
			myStack.Print();
			break;
		case QUIT:
			break;
		default:
			std::cout << "1,2,3�� �߿� �Է��ϼ���." << std::endl;
			break;
		}
	}
}


enum Command
{
	ENQUEUE = 1,
	DEQUEUE = 2,
	QUIT = 3
};

int main()
{
	int queueSize{}, y{};

	std::cout << "QUEUE�� ũ�⸦ �Է��ϼ��� : ";
	std::cin >> queueSize;

	Queue myQueue(queueSize);

	while (y != 3)
	{
		std::cin >> y;

		switch (y)
		{
			{
		case ENQUEUE:
			int value{};
			std::cout << "value >";
			std::cin >> value;
			myQueue.Enqueue(value);
			myQueue.Print();
			break;
			}
		case DEQUEUE:
			myQueue.Dequeue();
			myQueue.Print();
			break;
		case QUIT:
			break;
		default:
			std::cout << "1,2,3�� �߿� �Է��ϼ���." << std::endl;
			break;
		}
	}
}
*/