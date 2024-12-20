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
        int star1 = 65;
        int star2 = 65;
        /* code */
        for (int j = 0; j < n - i - 1; j++)
        {
            /* code */
            cout << "_";
        }
        for (int j = 0; j <= i; j++)
        {
            /* code */
            cout << (char)star1;
            star1++;
        }
        for (int j = 0; j < i; j++)
        {
            /* code */
            cout << (char)(star2 + i - j - 1);
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
void nForest7(int n )
{
    
}

int main()
{

    nForest6(6);
    return 0; // Indicate that the program ended successfully
}