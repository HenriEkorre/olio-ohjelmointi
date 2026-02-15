#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student
{
public:
    Student(string, int);

    int getIka() const;
    void setIka(int newIka);

    string getNimi() const;
    void setNimi(const string &newNimi);

    void printStudentInfo() const;

private:
    int ika;
    string nimi;
};

#endif // STUDENT_H
