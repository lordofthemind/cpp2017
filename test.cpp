// cpp for test
#include <iostream>
using namespace std;

void lineInput()
{
    string fName;
    int age;
    cout << "Enter name and age!" << endl;
    getline(cin, fName);
    cin >> age;
    cout << "Hello! " << fName << ", you are " << age << " years old!" << endl;
}

int main()
{
    lineInput();
    return 0;
}
