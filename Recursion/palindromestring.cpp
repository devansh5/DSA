#include <bits/stdc++.h>

using namespace std;


bool checkpalindrome(string s, int start, int end)
{
	if (start == end)
	{
		return true;
	}
	if (start > end)
	{
		return true;
	}

	if (s[start] != s[end])
	{
		return false;

	}

	return checkpalindrome(s, start + 1, end - 1);
}





int main()
{
	string s = "a";

	bool result = checkpalindrome(s, 0, s.length() - 1);
	if (result)
	{
		cout << "palindrome";
	}
	else {
		cout << "not palindrome";
	}
	return 0;
}