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

	int prev1 = 0, prev2 = 0;

	int curr = 0;
	for (int i = 1;i<n;i++)
	{
		int fs = prev1 + abs(energies[i] - energies[i - 1]);
		int ss = INT_MAX;
		if(i>1)
			ss = prev2 + abs(energies[i] - energies[i - 2]);
		curr = min(fs, ss);
		prev2 = prev1;
		prev1 = curr;
	}

	cout << "ANSWER: " << curr;
	return 0;
}