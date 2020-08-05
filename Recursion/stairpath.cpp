// Count ways to reach the nth stair using step 1, 2 or 3
// 27-12-2017
// A child is running up a staircase with n steps and can hop either 1 step, 2 steps, or 3 steps at a time. Implement a method to count how many possible ways the child can run up the stairs.

// Examples:

// Input : 4
// Output : 7
// Explantion:
// Below are the four ways
//  1 step + 1 step + 1 step + 1 step
//  1 step + 2 step + 1 step
//  2 step + 1 step + 1 step 
//  1 step + 1 step + 2 step
//  2 step + 2 step
//  3 step + 1 step
//  1 step + 3 step

// Input : 3
// Output : 4
// Explantion:
// Below are the four ways
//  1 step + 1 step + 1 step
//  1 step + 2 step
//  2 step + 1 step
//  3 ste



#include <bits/stdc++.h>

using namespace std;


int countnoofsteps(int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		return 0;
	}

	return countnoofsteps(n - 3) + countnoofsteps(n - 2) + countnoofsteps(n - 1);
}




int main()
{
	int t;
	cin >> t;
	int s = countnoofsteps(t);
	cout << s;



	return 0;
}