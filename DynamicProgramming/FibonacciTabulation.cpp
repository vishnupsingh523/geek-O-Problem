#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	cout << "Enter a nubmer: ";
	int x;
	cin >> x;

	cout << "Answer: ";
	
		int prev1 = 0,prev2 = 1;
	int ans = 0;

	for (int i = 2;i<=x;i++)
	{
		ans = prev1 + prev2;
		prev2 = prev1;
		prev1 = ans;
	}

	if(x<=1)
		cout << x;
	else
		cout << ans;
		return 0;
}