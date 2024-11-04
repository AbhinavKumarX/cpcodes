#include<iostream>
using namespace std;

int main()
{
    int income;
    cout<<"Please enter your income: ";
    cin>>income;
    double tax;
    if(income<600000)
    {
        tax = 0;
    }
    else if(income < 1500000)
    {
        tax = 0.1*income;
    }
    else if(income < 3000000)
    {
        tax = 0.2*income;
    }
    else 
    {
        tax = 0.3*income;
    }
    cout<<"Your tax is: "<<tax<<endl;
    cout<<"bye";
    return 0;
}