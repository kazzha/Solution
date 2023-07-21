#include <iostream>

const int STACK_SIZE{ 10 };

enum Command
{
	PUSH=1,
	POP=2,
	QUIT=3
};

struct ARRAY
{
	int toppoint{ -1 };
	int container[STACK_SIZE]{};
};

void Push(ARRAY& input, int value)
{ 
	if (input.toppoint >= STACK_SIZE - 1)
	{
		std::cout << "stack full!" << std::endl;
		return;
	}

	input.container[++input.toppoint] = value;
}

void Pop(ARRAY& input)
{
	if(input.toppoint < 0)
	{
		std::cout << "stack is already empty" << std::endl;
		return;
	}

	input.toppoint--;
}

void PrintArray(ARRAY& input)
{
	std::cout << "-------" << std::endl;
	if (input.toppoint < 0)
	{
		std::cout << "Empty!" << std::endl
		          << "-------" << std::endl;
		return;
	}

	for (int i =input.toppoint; i >=0; i--) {
		std::cout << input.container[i] << std::endl;
	}
	std::cout << "-------" << std::endl;
}

int main()
{
	std::cout << "1. PUSH" << std::endl << "2. POP" << std::endl << "3. QUIT" << std::endl;
	int number{};
	ARRAY stack;
	

	while (true)
	{
		PrintArray(stack);
		std::cout << ">";
		std::cin >> number;
		

		switch (number)
		{
		case PUSH:
		   { int value{};
		   std::cout << "value > ";
		   std::cin >> value;
		   Push(stack, value);
		   break;
		}

		case POP:
			Pop(stack);
			break;
			
		case QUIT:
			return 0;
			break;
		default:
			break;
		}

	
		
	}
}