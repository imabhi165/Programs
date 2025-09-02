#include <bits/stdc++.h>

using namespace std;

// Sorting in STL libraray : sort(first,last);
int main()
{
    vector<int> v = {5, 3, 1, 4, 2};

    sort(v.begin(), v.end());

    for (int i : v)
        cout << i << " ";
    cout << "\n";
    return 0;
}