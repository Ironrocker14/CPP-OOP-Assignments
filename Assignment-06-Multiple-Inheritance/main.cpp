#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudentData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);
    }
};

class Sports
{
protected:
    int sportsMarks;

public:
    void getSportsMarks()
    {
        cout << "Enter Sports Marks: ";
        cin >> sportsMarks;
    }
};

class Result : public Student, public Sports
{
private:
    int academicMarks;

public:
    void getResult()
    {
        getStudentData();
        cout << "Enter Academic Marks: ";
        cin >> academicMarks;

        getSportsMarks();
    }

    void displayResult()
    {
        cout << "\n----- Student Result -----";
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nAcademic Marks: " << academicMarks;
        cout << "\nSports Marks: " << sportsMarks;
        cout << "\nTotal Marks: " << academicMarks + sportsMarks << endl;
    }
};

int main()
{
    Result r;

    r.getResult();
    r.displayResult();

    return 0;
}
