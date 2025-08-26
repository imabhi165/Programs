// Array Transversal

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of Array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the Array Elements: " << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> arr[i];
    }
    cout << "Entered Array Elements are: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}