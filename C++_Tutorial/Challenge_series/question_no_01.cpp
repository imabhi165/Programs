// To check the Entered Number is Even or Odd

#include <bits/stdc++.h>

using namespace std;

bool isEven(int n)
{
    /*
    // Naive Approach-> O(1) & O(1) time and space complexity
    if (n % 2 == 0)
    return true;
    else
    return false;
    */

    // Efficient way to do this by using Bit wise operator & which is fast and efficient.

    if ((n & 1) == 0)
        return true;
    else
        return false;
}

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    if (isEven(num) == true)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}