#include<bits/stdc++.h>
using namespace std;
#define ll long long

int fibonacciSeries(int x, vector<int> arr)
{
	if(x<=1)
		return x;

	arr[x] = fibonacciSeries(x-1, arr) + fibonacciSeries(x-2, arr);
	return arr[x];
}

int main()
{

	cout << "Enter a nubmer: ";
	int x;
	cin >> x;

	cout << "\nFIBONACCI answer : ";
	vector<int> arr(x + 1, -1);

	cout<<fibonacciSeries(x, arr);

	return 0;
}