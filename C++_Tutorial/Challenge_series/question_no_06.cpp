#include <iostream>

using namespace std;

int sumOfDigit(int n)
{
    // 1.Naive Approach
    /*
    int sum = 0;
    while (n != 0)
    {
        int last = n % 10;
        sum = sum + last;
        n /= 10;
    }
    return sum;

    // 2.Recursive Approach
    if (n == 0)
    return 0;
    return (n % 10) + sumOfDigit(n / 10);
    */
    // Convert number to string
    string s = to_string(n);
    int sum = 0;

    // Loop through each character, convert to digit, and add to sum
    for (char ch : s)
    {
        sum += ch - '0';
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter Num: ";
    cin >> num;
    int SumResult = sumOfDigit(num);

    cout << SumResult << endl;

    return 0;
}