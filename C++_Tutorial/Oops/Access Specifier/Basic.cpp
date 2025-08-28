#include <bits/stdc++.h>

using namespace std;

class StudentData
{
public: // This is called Access Specifier.
    string Name;
    int ROllNo;
    float CGPA;

    StudentData(string n, int r, float c) // This is called Contructor
    {
        Name = n;
        ROllNo = r;
        CGPA = c;
    }
};

// StudentData s1; //s1 is the Object of the class StudentData.
int main()
{
    StudentData s1("Abhishek", 15, 9.3);
    cout << s1.Name << " " << s1.ROllNo << " " << s1.CGPA << endl;
}

// There are three types of Access specifier :- 1.Public->Member are access from outside the class. 2.Private->members cannot be access from the outside of the class. 3.Protected->members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.