#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout << "Please! Enter your name: ";
    string name;
    cin >> name;
    const string greeting = "Hello, " + name + "!";
    // Making spaces
    const string spaces(greeting.size(), ' ');
    const string second = "*" + spaces + "*";
    // Making stars
    const string first(second.size(), '*');
    cout << endl;
    cout << first << endl;
    cout << second << endl;
    cout << "*" << greeting << "*" << endl;
    cout << second << endl;
    cout << first << endl;

    return 0;
}