#include <iostream>
#include <vector>
#include <algorithm>
#include "student.h"

using namespace std;

int main()
{
    int selection = 0;
    vector<Student> studentList;

    do
    {
        cout << endl;
        cout << "Select" << endl;
        cout << "Add students = 0" << endl;
        cout << "Print all students = 1" << endl;
        cout << "Sort and print students according to Name = 2" << endl;
        cout << "Sort and print students according to Age = 3" << endl;
        cout << "Find and print student = 4" << endl;
        cout << "Exit = 5" << endl;

        cin >> selection;

        switch(selection)
        {
        case 0:
        {
            string n;
            int i;

            cout << "Syota nimi: ";
            cin >> n;

            cout << "Syota ika: ";
            cin >> i;

            studentList.emplace_back(n, i);
            break;
        }

        case 1:
        {
            if(studentList.empty())
            {
                cout << "Lista on tyhja\n";
                break;
            }

            for (const Student& r : studentList)
            {
                r.printStudentInfo();
            }
            break;
        }

        case 2:
        {
            sort(studentList.begin(), studentList.end(),
                 [](const Student& a, const Student& b)
                 {
                     return a.getNimi() < b.getNimi();
                 });

            for (const Student& s : studentList)
            {
                s.printStudentInfo();
            }
            break;
        }

        case 3:
        {
            sort(studentList.begin(), studentList.end(),
                 [](const Student& a, const Student& b)
                 {
                     return a.getIka() < b.getIka();
                 });

            for (const Student& s : studentList)
            {
                s.printStudentInfo();
            }
            break;
        }

        case 4:
        {
            string name;
            cout << "etsi kayttaja nimella: ";
            cin >> name;

            auto it = find_if(studentList.begin(), studentList.end(),
                              [name](const Student& a)
                              {
                                  return a.getNimi() == name;
                              });

            if (it != studentList.end())
            {
                it->printStudentInfo();
            }
            else
            {
                cout << "Opiskelijaa ei loytynyt\n";
            }
            break;
        }

        case 5:
            cout << "Poistutaan ohjelmasta...\n";
            break;

        default:
            cout << "Wrong selection\n";
            break;
        }

    } while(selection != 5);

    return 0;

}
