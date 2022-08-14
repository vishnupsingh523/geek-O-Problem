#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		int arr[n];
		
		for(int i=0;i<n;i++)
			cin >> arr[n];

		int	count = 0;

		for (int i = 0;i<k;i++)
		if(arr[i]<=k)
			count++;

		if(n==k || count==k)
			cout << 0 << "\n";
		
		else
			cout << k-count << "\n";
	}

	return 0;
}