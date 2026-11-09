#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    string name;
    int rollNo;

    ofstream fout("student.txt");

    if (!fout) 
	{
        cout << "Error opening file for writing!";
        return 1;
    }

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    fout << "Student Name: " << name << endl;
    fout << "Roll Number: " << rollNo << endl;

    fout.close();

    cout << "\nData written successfully!\n";
    
    ifstream fin("student.txt");

    if (!fin)
	{
        cout << "Error opening file for reading!";
        return 1;
    }

    string line;

    cout << "\nData read from file:\n";

    while (getline(fin, line)) 
	{
        cout << line << endl;
    }

    fin.close();

    return 0;
}
