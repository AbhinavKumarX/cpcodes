/*
You have an unlimited supply of Rs 1000, 500 and 200 notes.
You are given an amount.
Find the least number of currency notes required to make the closest possible amount.
*/
#include<iostream>

using namespace std;

int main()
{
    int amount;
    cin>>amount;
    int notes = 0;
    
    notes = notes + amount/500; //counts 500 rupee notes
    amount %= 500;

    cout<<"500 rupee notes = "<<notes<<endl;

    notes += (amount/200); //counts 200 rupee notes
    amount %= 200;

    notes += amount/100;//counts 100 rupee notes
    amount %= 100;

    cout<<"No of notes = "<<notes<<endl;
    cout<<"Remaining value = "<<amount;
    return 0;
}