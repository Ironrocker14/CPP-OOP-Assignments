#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter Details of Student 1\n";
    s1.getData();

    cout << "\nEnter Details of Student 2\n";
    s2.getData();

    cout << "\n----- Student Details -----\n";

    cout << "\nStudent 1:";
    s1.displayData();

    cout << "\nStudent 2:";
    s2.displayData();

    return 0;
}

