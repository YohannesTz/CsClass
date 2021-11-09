//Class4


//File Name: health.cpp
//Author: Your Name Goes Here.
//Email Address: Your Email Address Goes Here.
//Assignment Number: 2
//Description: Program to determine if the user is ill.
//Last Changed: Saturday, October 30, 2021
/*#include <iostream>
using namespace std;
int main( )
{
    const double NORMAL = 98.6;//degrees Fahrenheit
    double temperature;
    cout << "Enter your temperature: ";
    cin >> temperature;
    if (temperature > NORMAL)
    {
        cout << "You have a fever.\n";
        cout << "Drink lots of liquids and get to bed.\n";
    }
    else
    {
        cout << "You dont have a fever.\n";
        cout << "Go study.\n";
    }
    return 0;
}*/

//Sample 5
/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float num;
    int number;
    cout << "Enter any non-negative number: ";
    cin >> number;
    if (number >= 0) {
        num = sqrt(number);
        cout << "The Square Root of  ";
        cout << number;
        cout << " is " << num;
    } else {
        cout << "You have entered a negative number\n";
        cout << "Please do what you are asked to do.\n";
    }
    return 0;
}
*/

// Sample 6
/*#include <iostream>
#include <cmath>
using namespace std;
int main( )
{
    char option;
    float number,deg;
    cout << "Enter any number: ";
    cin >>number;
    if (number > 0)
        cout <<number<<" is positive";
    else if (number < 0)
        cout <<number<< " is negative";
    else
        cout << "you have entered "<<number;
    cout << "\nDo you want to continue :Type Y to say yes  ";
    cin >>option;
    if (option =='Y'||option =='y')
    {
        cout << "Enter any number: ";
        cin >>number;
        if (number > 0)
            cout <<number<<" is positive";
        else if (number < 0)
            cout <<number<< " is negative";
        else
            cout << "you have entered "<<number;
    }
    else
        cout << "Good bye! Come again please";
    cout <<"Enter the Degree value of an angle\n ";
    cin>>deg;
    if (deg >=0 && deg <=90)
        cout<<"Sin of "<<deg<<" degree is "<<sin(deg);
    return 0;
}*/

//Computes the size of an appartment that can be purchased
//given the user's budget.
#include <iostream>
#include <cmath>
using namespace std;
int main( )
{
    const double COST_PER_SQ_FT = 1000.50;
    double budget, area, length_side;
    cout << "Enter the amount budgeted for your appartment in $";
    cin >> budget;
    area = budget/COST_PER_SQ_FT;
    length_side = sqrt(area);
    cout << "For a price of $" << budget << endl
         << "I can build you a luxurious square appartment\n"
         << "that is " << length_side
         << " feet on each side.\n";
    return 0;
}
