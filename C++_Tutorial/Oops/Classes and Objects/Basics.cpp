#include <string>
#include <iostream>
using namespace std;
class myclass
{
public:              // Access specifier
    int myNum;       // Attributes (int variable)
    string myString; // Attribute (string Variable)
};

// the class :-class keyword is used to create a class called MyClass
// The Public keyword is an access specifier which specifies that members(attributes and methods) of the class are accessible from outside the class

int main()
{
    myclass myObj;

    myObj.myNum = 10;
    myObj.myString = "Abhishek";

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;
    return 0;
}