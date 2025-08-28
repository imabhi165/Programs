// This is the question to Swap Two Numbers

#include <iostream>
using namespace std;

void SwapNum(int &a, int &b) // If we won't make this 'PASS BY REFERENCE',it will not work.
{
    /*
    // 1.Naive Approach
    int temp;
    temp = a;
    a = b;
    b = temp;
    */
    // 2.Using Bitwise Operation without using third variable
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
int main()
{
    int x, y;
    cout << "Enter two Numbers: ";
    cin >> x >> y;
    cout << "Before Swapping Number is: ";
    cout << x << " " << y;
    cout << "\n";
    SwapNum(x, y);
    cout << "After Swapping Number is : ";
    cout << x << " " << y;
    cout << "\n";
}