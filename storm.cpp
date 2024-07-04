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
    Student examp3("Иван", "Кузнецов", "Владимирович", "20");
    Student examp4("Николай", "Скворцов", "Андреевич", "25");
    Student examp5("Виктор", "Прохоров", "Евгеньевич", "25");
    mapStud prep;
    prep.addmapStud(examp1);
    prep.addmapStud(examp2);
    prep.addmapStud(examp3);
    prep.addmapStud(examp4);
    prep.addmapStud(examp5);
    prep.print();
    cout << "----------------------------------\n";
    prep.search("Николай", "Скворцов", "Андреевич", "25");
}
