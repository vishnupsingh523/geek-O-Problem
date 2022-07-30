#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

	cout << "Enter string: ";
	string str;
	cin >> str;

	unordered_map<char, int> frequency;

	for (int i = 0; i < str.size();i++)
	{
		frequency[str[i]]++;
	}

	for (int i = 0; i < str.size();i++)
	if(frequency[str[i]]==1)
	{
		cout << "\nAns: " << str[i] << " -> " << frequency[str[i]];
		break;
	}

		return 0;
}