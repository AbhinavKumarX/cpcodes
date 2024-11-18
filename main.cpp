#include <iostream> // for input and output
#include <string>   // for handling strings (optional, depending on input type)

using namespace std;

int main()
{
    int arr[5];

    // reading the input
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    // outputing
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0; // Indicate that the program ended successfully
}