#include "student.h"
#include <iostream>
Student::Student(string n, int i) {
    ika = i;
    nimi = n;
}

int Student::getIka() const
{
    return ika;
}

void Student::setIka(int newIka)
{
    ika = newIka;
}

string Student::getNimi() const
{
    return nimi;
}

void Student::setNimi(const string &newNimi)
{
    nimi = newNimi;
}

void Student::printStudentInfo() const{
    std::cout << "nimi " << nimi << ", ika " << ika << endl;
}
