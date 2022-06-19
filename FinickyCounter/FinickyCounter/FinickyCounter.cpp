// FinickyCounter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int count = 0;

	while (true)
	{
		count += 1;
		if (count > 10)
		{
			break; //breaks the loop and come out of the loop
		}

		if (count == 5)
		{
			continue; // skips printing 5 because when count becomes 5 it just jump back on the start of loop
		}
		cout << count << endl;

	}
	return 0;
}

