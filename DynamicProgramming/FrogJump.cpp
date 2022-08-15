#include<bits/stdc++.h>
using namespace std;
#define ll long long
// vector<int> energies(20);

int recursion(int n, vector<int> &energies, vector<int> & dp)
{
	if(n ==0)
		return 0;

	if(dp[n]!= -1)
		return dp[n];
	int left = INT_MAX;
	int right = INT_MAX;

	left = recursion(n - 1, energies, dp) + abs(energies[n] - energies[n-1]);
	
	if(n>1)
	right = recursion(n - 2, energies, dp) + abs(energies[n] - energies[n-2]);

	return dp[n] = min(left, right);
}

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

	cout << "MINIMUM ENERGY TO CLIMB : " << recursion(n-1, energies, dp);
	return 0;
}