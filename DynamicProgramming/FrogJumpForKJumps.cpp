#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

	cout << "Number of Stairs: ";
	int n;
	cin>>n;

	// int energies[n];
	vector<int> energies(n);
	vector<int> dp(n + 1, -1);
	cout << "Energies: ";
	for (int i = 0;i<n;i++)
		cin >> energies[i];

	dp[0] = 0;

	for (int i = 1;i<n;i++)
	{
		for (int j = 1; j <= i;j++)
		{
			int fs = dp[j-1] + abs(energies[j] - energies[j - 1]);
			int ss = INT_MAX;
			if(j>1)
				ss = prev2 + abs(energies[i] - energies[i - 2]);
			dp[i] = min(fs, ss);
		}
	}

	cout << "ANSWER: " << curr;
	return 0;
}