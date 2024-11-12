#include <iostream>  // for input and output
#include <string>    // for handling strings (optional, depending on input type)

using namespace std;

int main() {
    // Variable to store input
    int number;  // Example: change type based on your needs
    
    // Prompt user for input
    cout << "Enter a number: " << "\n";
    cin >> number;

    // Process the input (optional, depending on task)
    int result = number * 2;  // Example operation: doubling the input

    // Display output
    cout << "The double of your number is: " << result << endl;

    return 0;  // Indicate that the program ended successfully
}