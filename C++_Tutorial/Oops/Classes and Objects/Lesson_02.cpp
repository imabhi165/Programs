#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{

    /*
    // Creating Object of car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Creating another Object of car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1968;

     // Print table header
    cout << left << setw(10) << "Brand"
         << setw(15) << "Model"
         << setw(6) << "Year" << endl;

    cout << string(31, '-') << endl;

    // Print car objects
    cout << left << setw(10) << carObj1.brand
         << setw(15) << carObj1.model
         << setw(6) << carObj1.year << endl;

    cout << left << setw(10) << carObj2.brand
         << setw(15) << carObj2.model
         << setw(6) << carObj2.year << endl;
    */

    // Other way using stl library to store Object Dynamically

    vector<Car> cars = {
        {"BMW", "X5", 1999},
        {"Ford", "Mustang", 1968},
        {"Tesla", "Model S", 2022}};

    cout << left << setw(10) << "Brand"
         << setw(15) << "Model"
         << setw(6) << "Year" << endl;
    cout << string(31, '-') << endl;

    for (auto &car : cars)
    {
        cout << left << setw(10) << car.brand
             << setw(15) << car.model
             << setw(6) << car.year << endl;
    }
    return 0;
}