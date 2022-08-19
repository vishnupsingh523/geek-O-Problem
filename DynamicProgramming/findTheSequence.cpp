#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
	string str;
	cin>>str;
	int n = str.length();
	long long a = 0, b = (1 << n);
	vector<int> ans(n);
	// cout << b<<endl;

	unordered_map<int, int> storedAns;

	for(int i=0;i<n;i++)
	{
		if(str[i]=='L')
		{
			ans[i] = (a + b) / 2;
			b = ans[i];
		}
		else
		{
			ans[i] = (a + b) / 2;
			a = ans[i];
		}
		
		storedAns[ans[i]] = i+1;
	}

	sort(ans.begin(), ans.end());

	for (int i = 0; i < ans.size();i++)
	{
		if(storedAns.find(ans[i])!=storedAns.end())
			cout << storedAns[ans[i]]<<endl;
	}

	return 0;
 }