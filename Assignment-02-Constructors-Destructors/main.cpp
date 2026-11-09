
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
	
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    void display()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name << endl;
    }

    ~Student()
    {
        cout << "\nDestructor Called for " << name << endl;
    }
};

int main()
{
    cout << "Creating First Object" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating Second Object" << endl;
    Student s2(101, "Yaser");
    s2.display();

    cout << "\nEnd of Main Function" << endl;

    return 0;
}
