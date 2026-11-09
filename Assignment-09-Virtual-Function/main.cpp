#include <iostream>
using namespace std;

class Base 
{
public:
    virtual void display() 
	{
        cout << "This is Base Class" << endl;
    }
};

class Derived : public Base 
{	
	public:
	    void display() override 
		{
	        cout << "This is Derived Class" << endl;
	    }
};

int main() 
{
    Base *ptr;
    Base b;
    Derived d;

    ptr = &b;
    ptr->display();

    ptr = &d;
    ptr->display();

    return 0;
}
