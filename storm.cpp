#include <iostream>
#include "mapStud.h"
#include "Student.h"
#include <Windows.h>


using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student examp1("Иван", "Гончаров", "Михайлович", "21");
    Student examp2("Дмитрий", "Ильин", "Александрович", "19");
    mapStud prep;
    prep.addmapStud(examp1);
    prep.addmapStud(examp2);
    prep.print();
}
