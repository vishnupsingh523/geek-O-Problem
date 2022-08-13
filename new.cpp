#include<bits/stdc++.h>
using namespace std;
#define ll long long

// call by value
void add(int &a, int &b)
{
	a = a + b;
	b = b + a;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};


	int second = 0;
	int maxVal = 0;


	for (int i = 0; i < 5;i++)
	{
		if(arr[i]>maxVal)
			maxVal = arr[i];
		if(second<maxVal && second<arr[i])
			second = arr[i];
	}

// second largest value:
	cout<<second;

		// int a = 10;
		// int b = 20;
		// add(a, b);
		// cout << a << " " << b;

		return 0;
}