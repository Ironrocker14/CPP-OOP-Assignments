#include <iostream>
using namespace std;

class ClassA 
{
public:
    int num;

    ClassA(int n) 
	{
        num = n;
    }
};

class ClassB 
{
	private:
	    int value;
	
	public:
	    ClassB(ClassA obj) 
		{
	        value = obj.num;
	    }
	
	    void display() 
		{
	        cout << "Value in ClassB object: " << value << endl;
	    }
};

int main() 
{
    ClassA obj1(100);

    ClassB obj2 = obj1;

    obj2.display();

    return 0;
}
