// This question is to print the Multiplication Table;

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getTable(int n)
    {
        vector<int> table;
        for (int i = 1; i <= 10; i++)
        {
            table.push_back(n * i);
        }
        return table;
    }
};

int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;

    Solution obj; // create object of Solution
    vector<int> result = obj.getTable(num);

    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 0; i < result.size(); i++)
    {
        cout << num << " x " << i + 1 << " = " << result[i] << endl;
    }

    return 0;
}
