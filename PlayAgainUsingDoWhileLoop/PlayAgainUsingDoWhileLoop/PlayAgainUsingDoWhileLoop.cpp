// PlayAgainUsingDoWhileLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char playAgain;
	
	do
	{

	cout << "\n#####YOU HAVE PLAYED AN EXCITING GAME. WELL DONE!!\n";
	cout << "\n\Please press 'y' to repeat the game or 'n' to exit. Thank you!\n";
	cin >> playAgain;

	} while (playAgain == 'y');
	
return 0;
}



