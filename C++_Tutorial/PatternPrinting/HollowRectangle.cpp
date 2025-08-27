// ******
// *    *
// *    *
// ******

//The Above pattern is known as Hollow rectangle
#include <iostream>

int main() {
    int rows, cols;
    
    // Input the number of rows and columns for the rectangle
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Draw the hollow rectangle
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            // Print asterisks for the first and last rows
            // and the first and last columns
            if (i == 1 || i == rows || j == 1 || j == cols) {
                std::cout << "*";
            } else {
                // Print a space for the inner area
                std::cout << " ";
            }
        }
        std::cout << std::endl;  // Move to the next row
    }

    return 0;
}
