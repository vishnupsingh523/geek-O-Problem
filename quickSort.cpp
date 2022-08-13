#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print( arr, size)         \
	for (int i = 0; i < size; i++) \
		cout << arr[i] << " ";

void quickSort(int * arr, int left, int right)
{
	arr[left] = 0;
	// cout << arr[left];
}


int main()
{

	int arr[] = {1, 4, 2, 5, 2, 5, 2, 1, 6};
	int size = sizeof(arr) / sizeof(arr[0]);

	print(arr, size);
	cout << "\nAfter sorting: ";
	quickSort(arr, 0, size);
	print(arr, size);
	return 0;
}