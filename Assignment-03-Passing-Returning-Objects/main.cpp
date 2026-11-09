#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void getData()
    {
        cout << "Enter Real Part: ";
        cin >> real;

        cout << "Enter Imaginary Part: ";
        cin >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c)
    {
        Complex temp;

        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter First Complex Number\n";
    c1.getData();

    cout << "\nEnter Second Complex Number\n";
    c2.getData();

    c3 = c1.add(c2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
