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
		int minSteps = INT_MAX;
		for (int j = 1; j <= i;j++)
		{
			int jump = 0;
			if(i-j>=0)
				jump = dp[i-j] + abs(energies[i] - energies[i - 2]);
			minSteps = min(minSteps, jump);
		}
		dp[i] = minSteps;
		}

	cout << "ANSWER: " << dp[n-1];
	return 0;
}