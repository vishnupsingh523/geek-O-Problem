#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	string str;
	cout << "Enter String: ";
	cin >> str;

	unordered_map<char, int> maxChar;

	for (int i = 0; i < str.size();i++)
	{
		if(maxChar.find(str[i]) != maxChar.end())
			maxChar[str[i]]++;
		else
			maxChar[str[i]]++;
	}

	char ch=maxChar.begin()->first;
	for (auto i = maxChar.begin(); i != maxChar.end();  i++)
	{
		if(maxChar[ch]<i->second)
			ch = i->first;
		cout << i->first<<" "<<i->second<<endl;
	}

	cout << "\nMaximum occured character in the string : " << ch << " " << maxChar[ch];
	return 0;
}