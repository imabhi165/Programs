#include <bits/stdc++.h>

using namespace std;

// Method-> methods are function that belongs to a class.
// Two ways to define function that belongs to the class->1.Inside class definition 2.Outside Class Definition

class MyClass
{
public:
    void myMethod()
    {
        cout << "Hello Buddy!!\n";
    }
};

int main()
{
    MyClass myObj;
    myObj.myMethod();
    return 0;
}