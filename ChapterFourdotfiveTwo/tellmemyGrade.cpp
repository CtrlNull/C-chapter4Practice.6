/* 
	This program uses nested if/else statements to assign a letter grade
	(a, b, c, d, or f) to a numeric test score.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	// Constants for grade thresholds
	const int A_Score = 90,
			B_Score = 80,
			C_Score = 70,
			D_Score = 60;

	int testScore; // Holds a numberic test score.

	// Get the numeric test score.
	cout << "Enter your numeric test score and I will \n";
	cout << "tell you the letter grade you earned: ";
	cin >> testScore;

	// Destermine the letter grade.

	if (testScore >= A_Score)
	{
		cout << " Your grade is A. \n";
	}
	else
	{
		if (testScore >= B_Score)
		{
			cout << "Your grade is B. \n";
		}
		else
		{
			if (testScore >= C_Score)
			{
				cout << "Your grade is C.\n";
			}
			else
			{
				if (testScore >= D_Score)
				{
					cout << " Your grade is D. \n";
				}
				else
				{
					cout << "Your grade is F.\n";
				}
			}
		}
	}
    return 0;
}

