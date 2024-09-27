/*
Title:Chapter 3 Exercise 6 - Ingredient Adjuster
File name:Chapter3Ex6_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:9/27/2024
Requirements:

A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar

• 1 cup of butter

• 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. 
Write a program that asks the user how many cookies he or she wants to make, 
then displays the number of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream>
using namespace std;
const double sugar = 1.5;
const double butter = 1;
const double flour = 2.75;

int main()
{
    double numberCookies;
    double amountSugar;
    double amountButter;
    double amountFlour;
    double amountTotalSugar;
    double amountTotalButter;
    double amountTotalFlour;

    amountSugar = sugar / 48;
    amountButter = butter / 48;
    amountFlour = flour / 48;

    cout << "Please enter the amount of cookies you want to make:";
    cin >> numberCookies;
    amountTotalSugar = amountSugar * numberCookies;
    amountTotalButter = amountButter * numberCookies;
    amountTotalFlour = amountFlour * numberCookies;
    cout << "Your amounts needed are: " << endl << amountTotalSugar << " cups sugar" << endl << amountTotalButter 
        << " cups butter" << endl << amountTotalFlour << " cups flour";
    return 0;
}

