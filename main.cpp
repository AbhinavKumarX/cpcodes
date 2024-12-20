#include <iostream> // for input and output
#include <string>   // for handling strings (optional, depending on input type)

using namespace std;

void nForest(int n)

{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        /* code */
        int start = 1;
        if (i % 2 == 0)
        {
            /* code */
            start = 1;
        }
        else
        {
            start = 0;
        }

        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void nForest2(int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << j + 1 << " ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            /* code */
            cout << "  " << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << i - j + 1 << " ";
        }
        cout << endl;
    }
}
void nForest3(int n)

{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < i; j++)
        {
            /* code */
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}
void nForest4(int n)
{
    int start = 65;
    for (int i = 0; i < n; i++)
    {
        /* code */

        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << (char)start << " ";
        }
        cout << endl;
        start++;
    }
}
void nForest5(int n) // this code can be more optimised by eliminating variable start altogether and using i and j instead of ++ for enumeration.
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "_";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << (char)(65 + j);
        }
        for (int j = 0; j < i; j++)
        {
            cout << (char)(65 + i - j - 1);
        }

        cout << endl;
    }
}
void nForest6(int n)
{
    int start = 65;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << (char)(start + n - i + j - 1);
        }
        cout << endl;
    }
}
void nForest7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "__";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "__";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void nForest8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "__";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++) // i = 1 because we have already printed the first row of the second half in the first loop.
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "__";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void nForest9(int n)
{

    // outer loop for no. of rows.
    for (int i = 0; i < n; i++)
    {

        // inner loop for printing the stars at borders only.
        for (int j = 0; j < n; j++)
        {

            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";

            // if not border index, print space.
            else
                cout << " ";
        }

        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{

    nForest9(6);
    return 0; // Indicate that the program ended successfully
}