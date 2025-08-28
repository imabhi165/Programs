#include <iostream>
#include <vector>

using namespace std;

// Vectors -> Vector is the same as Array but it store data dynamically and it stores all the data in end , also removed from the end only.
// It automatically manages its size when we removes or add any elements.

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5}; // This is the Vector of INTEGER type.

    vector<string> data = {"Abhishek", "Ashu", "Vivek", "Dhananjay"};
    // This will Print the Integer data.
    //  for (int num : nums)
    //  {
    //      cout << num << " ";
    //  }
    // This will Print the String data.
    //  for (string str : data)
    //  {
    //      cout << str << " ";
    //  }

    // Accessing Vector Elements -> 1.data[0], 2.data.front(),data.back()3.data.at(1),data.at(3)....etc

    // cout << data[0] << " ";//This will print Abhishek
    // cout << data[2] << " "; //This will print Vivek

    // cout << data.front() << endl; //this will print Abhishek
    // cout << data.back(); //This will print dhananjay

    cout << data.at(1) << endl; // Thi will print Ashu
    cout << data.at(3) << endl; // This will print Dhananjay
    // cout << "\n";

    return 0;
}