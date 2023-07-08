#include <iostream>

const int QUEUE_SIZE{ 10 };

enum Command
{
	ENQUEUE=1,
	DEQUEUE=2,
	QUIT=3
};

struct Queue
{
	int head{};
	int tail{ -1 };
	int container[QUEUE_SIZE]{};
};

void PrintQueue(Queue& input)
{
	std::cout << "--------" << std::endl;
	if (input.head == input.tail+1 )
	{
		std::cout << "Empty!" << std::endl << "--------" << std::endl;
		return;
	}
	for (int i = input.head; i <= input.tail; i++)
	{
	std::cout << input.container[i] << " ";
	}
	std::cout << std::endl;
}

void PrintInfo()
{
	std::cout << "1. ENQUEUE" << std::endl
		<< "2. DEQUEUE" << std::endl
		<< "3. QUIT" << std::endl;

}

void Enqueue(Queue& input, int value)
{
	if (input.tail >= QUEUE_SIZE - 1) {
		std::cout << "Queue is full" << std::endl;
		return;
	}
	input.tail = (input.tail + 1) % QUEUE_SIZE;
	input.container[input.tail] = value;
}

void Dequeue(Queue& input)
{
	if (input.head-1 == (input.tail) % QUEUE_SIZE)
	{
		std::cout << "Queue is already empty" << std::endl;
		return;
	}
	input.head = (input.head + 1) % QUEUE_SIZE;
}

int main()
{
	int number{};
	Queue myQueue; 
	PrintInfo();

	while (true)
	{
		PrintQueue(myQueue);
		std::cout << "> ";
		std::cin >> number;

		switch (number)
		{
		case ENQUEUE:
		{ int value{};
		std::cout << "value > ";
		std::cin >> value;
		Enqueue(myQueue, value);
		break;
		}

		case DEQUEUE:
			Dequeue(myQueue);
			break;

		case QUIT:
			return 0;
			break;
		default:
			break;
		}
	}
}