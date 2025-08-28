#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> nums = {12, 2, 3, 4, 5, 6};

    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << "\n";

    // This will print the first and last number
    //  cout << nums.front() << endl;
    //  cout << nums.back() << endl;
    return 0;
}