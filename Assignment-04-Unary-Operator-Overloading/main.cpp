#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void display()
    {
        cout << "Number = " << num << endl;
    }

    void operator-()
    {
        num = -num;
    }
};

int main()
{
    Number n;

    n.getData();

    cout << "\nOriginal Number:\n";
    n.display();

    -n;

    cout << "\nAfter Unary Minus Operation:\n";
    n.display();

    return 0;
}
