// Menu Chooser.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "Please choose the diffeiculty level: \n\n";
    cout << "1: Easy\n";
    cout << "2: Medium\n";
    cout << "3: Hard\n";

    cout << "\n\nPlease enter Your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n You picked Easy!";
        break;
    case 2:
        cout << "\n You picked Medium!";
        break;
    case 3:
        cout << "\n You picked Hard!";
        break;
    default:
        cout << "\n Made an illeagal choice Dumbo!!";
        break;
    }
    return 0;

}


