#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	cout << "Size: ";
	int size;
	cin >> size;

	unordered_map<string, int> cards;

	cout << "Enter color values: ";
	for (int i = 0; i < size;i++)
	{
		string str;
		cin >> str;
		cards[str] = i;
	}

	cout << "\nEnter current index: ";
	int currIndex;
	cin >> currIndex;

	cout << "\nColor to be found: ";
	string query;
	cin >> query;

	int qindex = cards[query];
	if(qindex>currIndex)
	{
		if(size-currIndex+qindex > qindex-currIndex)
			cout << qindex - currIndex;
		else
			cout << endl << (size - currIndex + qindex);
	}
	else
	{
		if(size-qindex+currIndex > currIndex-qindex)
			cout << currIndex-qindex;
		else
			cout << endl << (size - qindex + currIndex);
	}
	return 0;
}