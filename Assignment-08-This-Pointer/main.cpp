#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    void getData(int rollNo, string name)
	{
        this->rollNo = rollNo;
        this->name = name;
    }

    void displayData() 
	{
        cout << "\nStudent Details";
        cout << "\nRoll Number: " << this->rollNo;
        cout << "\nName: " << this->name << endl;
    }
};

int main() 
{
    Student s1;

    s1.getData(101, "Yaser");
    s1.displayData();

    return 0;
}
