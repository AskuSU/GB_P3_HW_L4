#include <windows.h>
#include <vector>
#include <list>
#include "MyLib.h"

#include "VectorExt.h"

void Task1()
{
	std::cout << "Работа с Функцией insert_sorted:" << std::endl << std::endl;
	
	std::vector<int32_t> vec{ -5, -3, -2, -1, 0, 2, 3, 6, 7, 9 };
	std::list<int32_t> list{ -9, -5, -3, -1, 2, 4, 6, 8, 9 };
	auto printVec = [&vec]()
	{
		for (const auto& i : vec) std::cout << i << ", ";
		std::cout << std::endl;
	};
	auto printList = [&list]()
	{
		for (const auto& i : list) std::cout << i << ", ";
		std::cout << std::endl;
	};
	printVec();
	insert_sorted(vec, 1);
	printVec();
	std::cout << std::endl;
	printList();
	insert_sorted(list, 0);
	printList();

	std::cout << std::endl;
}

void Task2()
{
	std::cout << "Работа с Классом Matrix:" << std::endl << std::endl;
	
}


int main()
{
	setlocale(LC_ALL, "RU");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	unsigned short taskNumber = 0;
	while (true)
	{
		taskNumber = myLib::getUserSelectedTask(2);
		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		}
		std::cout << std::endl;
	}

    return 0;
}