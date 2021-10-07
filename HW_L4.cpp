#include <windows.h>
#include "MyLib.h"



void Task1()
{
	std::cout << "Работа с Функцией push_back_average:" << std::endl << std::endl;
	
	std::cout << std::endl;
}

void Task2()
{
	std::cout << "Работа с Классом Matrix:" << std::endl << std::endl;
	
}


void Task3()
{	
	std::cout << "Работа с Классом Range:" << std::endl << std::endl;
	
}


int main()
{
	setlocale(LC_ALL, "RU");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	unsigned short taskNumber = 0;
	while (true)
	{
		taskNumber = myLib::getUserSelectedTask(3);
		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		case 3: Task3();
			break;
		}
		std::cout << std::endl;
	}

    return 0;
}