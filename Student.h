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
	static bool count;
public:
	Student(string name, string surname, string patronymic, string age) : name{ name }, surname{ surname }, patronymic{ patronymic }, age{ age } 
	{
		timer();
		course = rand() % 6 + 1;
		group = rand() % 100 + 1;
	};
	Student() {};
	static void timer()
	{
		if(count == false) srand(time(NULL));
		count = true;
	}
};
bool Student::count = false;