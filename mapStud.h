#pragma once
#include "Student.h"
#include <map>


class mapStud
{
	map<string, map< string, map< string, map< string, Student>>>> tru;
public:
	mapStud() {};
	void addmapStud(Student & stud) 
	{
		tru[stud.name][stud.surname][stud.patronymic][stud.age] = stud;
	}
	void print()
	{
		cout << "��� ��������:\n\n";
		int num = 1;
		for (auto& name : tru)
		{
			for (auto& surname : name.second)
			{
				for (auto& patronymic : surname.second)
				{
					for (auto& age : patronymic.second)
					{
						cout << num << endl;
						num++;
						cout << "  �.�.�.: " << age.second.surname + " " << age.second.name + " " << age.second.patronymic << endl;
						cout << "  �������: " << age.second.age << endl;
						cout << "  ����� ������: " << age.second.group << endl;
						cout << "  ����: " << age.second.course << endl << endl;
					}
				}
			}
		}
	}
	void search(string name, string surname, string patronymic, string age)
	{
		int num = 1;
		for (auto& nameM : tru)
		{
			if (nameM.first == name) {
				for (auto& surnameM : nameM.second)
				{
					if (surnameM.first == surname) {
						for (auto& patronymicM : surnameM.second)
						{
							if (patronymicM.first == patronymic) {
								for (auto& ageM : patronymicM.second)
								{
									if (ageM.first == age) {
										cout << num << endl;
										num++;
										cout << "  �.�.�.: " << ageM.second.surname + " " << ageM.second.name + " " << ageM.second.patronymic << endl;
										cout << "  �������: " << ageM.second.age << endl;
										cout << "  ����� ������: " << ageM.second.group << endl;
										cout << "  ����: " << ageM.second.course << endl << endl;
									}
									else cout << "�������� �� �������" << endl;
								}
							}
							else cout << "�������� �� �������" << endl;
						}
					}
					else cout << "�������� �� �������" << endl;
				}
			}
			else cout << "�������� �� �������" << endl;
		}
	}
};