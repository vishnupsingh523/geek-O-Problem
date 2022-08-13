#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct sample{
	int a = 0;
	char b = 'A';
	float c = 10.5;
};

int main()
{
	// int arr[] = {0, 2, 4, , 6, 7, 5, 3};
	// int n, result = 0;

	// for (n = 0; n < 8; n++)
	// 	result += arr[n];
	// cout << result;

	int a[2][3] = {1, 2, 3, , 4, 5};
	int i = 0, j = 0;
	for (i = 0; i < 2;i++)
		for (j = 0; j < 3;j++)
			cout << a[i][j];

			return 0;
}