#include <iostream>
#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

/*
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }

        mp[nums[i]] = i;
    }

    return {}; // return empty if no solution
}
    int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    }
    else
    {
        cout << "No solution found!" << endl;
    }

    return 0;
}

*/

bool twosum(int arr[], int target)
{
    for (int i = 0; i < arr.length(); i++)
    {
        if (arr[i] + arr[i + 1] == target)
        {
            return true;

            // i will add it later , rest solution will be added later
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int arr[5] = {0, -1, 2, -3, 1};
    int target = -2;
    bool result = twosum(arr, target);
    if (result == true)
        cout << "True";
    else
        cout << "False";
}
