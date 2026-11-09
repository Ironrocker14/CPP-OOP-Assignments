#include <iostream>
using namespace std;

class ClassB;

class ClassA 
{
private:
    int num1;

public:
    void getData() 
	{
        cout << "Enter first number: ";
        cin >> num1;
    }

    friend int add(ClassA, ClassB);
};

class ClassB
{
private:
    int num2;

public:
    void getData() 
	{
        cout << "Enter second number: ";
        cin >> num2;
    }

    friend int add(ClassA, ClassB);
};

int add(ClassA a, ClassB b) 
{
    return a.num1 + b.num2;
}

int main() 
{
    ClassA a;
    ClassB b;

    a.getData();
    b.getData();

    cout << "Sum = " << add(a, b) << endl;

    return 0;
}
