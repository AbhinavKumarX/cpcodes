#include <iostream> // for input and output
#include <string>   // for handling strings (optional, depending on input type)

using namespace std;

void nForest(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        /* code */
        for (int j = 1; j < i; j++)
        {
            /* code */
            cout << " ";
        }
        for (int k = (2 * n - 1); k >= (2 * i - 1); k--)
        {
            /* code */
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{

    nForest(4);
    return 0; // Indicate that the program ended successfully
}