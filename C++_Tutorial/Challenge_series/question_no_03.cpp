// This question is to find the sum of n Natural Numbers;

#include <iostream>
using namespace std;

int findSum(int n)
{
    /*
    // 1.Naive Approach
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;

    // 2.Recursive Approach
    if (n == 1)
    return 1;
    return n + findSum(n - 1);
    */

    // 3.Formula based Approach
    n = (n * (n + 1)) / 2;
    return n;
}

int main()
{
    int num;
    cout << "Enter Num: ";
    cin >> num;
    int result = findSum(num);
    cout << result << endl;
    return 0;
}