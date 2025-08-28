#include <bits/stdc++.h>
using namespace std;

class StudentData
{
public:
    string name;
    int roll;
    float marks;
};

// Objects of classes
StudentData s1;
StudentData s2;
StudentData s3;
int main()
{
    // Student 1 Data->Object 1 ->Attributes
    s1.name = "Abhishek";
    s1.roll = 15;
    s1.marks = 98;
    // Student 2 data->Object 2->Attributes
    s2.name = "Ashu";
    s2.roll = 20;
    s2.marks = 99;
    // Student 3 data ->Object3->Attributes
    s3.name = "Ram";
    s3.roll = 21;
    s3.marks = 100;

    // Now printing the Value of all the objects
    cout << "Name" << "| " << "RollNumber" << "| " << "Marks" << endl;
    cout << s1.name << " " << s1.roll << " " << s1.marks << endl;
    cout << s2.name << " " << s2.roll << " " << s2.marks << endl;
    cout << s3.name << " " << s3.roll << " " << s3.marks << endl;
}