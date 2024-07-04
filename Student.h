#pragma once
#include <string>
#include <ctime>

using namespace std;

class Student
{
	friend class mapStud;

	int course = 2;
	int group = 9;
	string name;
	string surname;
	string patronymic;
	string age;
public:
	Student(string name, string surname, string patronymic, string age) : name{ name }, surname{ surname }, patronymic{ patronymic }, age{ age } 
	{
		srand(time(NULL));
		std::cout << rand() % 100 + 1;
	};
	Student() {};
};
