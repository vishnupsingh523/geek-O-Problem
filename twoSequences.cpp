#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		string a, b;
		int n, m;

		cin >> n >> m;
		cin >> a;
		cin >> b;

		if(n==m && a==b)
			cout << "YES"
				 << "\n";
		else
		{
			int count = 0;
			bool flag = false;
			for(int i=0;i<n;i++)
			{
				if(a[i]==b[count])
					count++;
				if(count==m)
					{
						flag = true;
						break;
					}
			}
			if(flag)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}