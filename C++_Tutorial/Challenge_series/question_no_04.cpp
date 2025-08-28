#include <iostream>

using namespace std;

int SumofSqofNaturalNum(int n)
{
    // 1.Naive Approach
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter Num: ";
    cin >> num;
    int result = SumofSqofNaturalNum(num);
    cout << result << endl;
    return 0;
}