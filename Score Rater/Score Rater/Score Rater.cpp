// Score Rater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int score = 0; //datatype int //variable name  = score // value is 1000

	if (true)
	{
		cout << "This is always displayed\n\n";
	}
	if (false)
	{
		cout << "This is never displayed \n\n";
	}

	if (score >=1000)
	{
		cout << "You have score 1000 or more\n";
	}
	if (score>=500)
	{
		cout << "You have score 500\n";
	}
	if (score>250)
	{
		cout << "You have scored 250 or more!\n";
	}
	else
	{
		cout << "****You are NOOB****\n\n";
	}
	return 0;

}


