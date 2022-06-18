// ScoreRaterImproved.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "\n Please enter the score: ";
    cin >> score;

    if (score>=1000)
    {
        cout << "\nYou have score more 1000 or more!";
    }
    else if(score >= 500)
    {
        cout << "\n you have scored 500 or more!";
    }
    else if (score>= 250)
    {
        cout << "\n You have scorte 250 or more";
    }

    return 0;
}


