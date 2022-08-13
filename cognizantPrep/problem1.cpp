#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	// static int a[2][2] = {1, 2, 3, 4};
	// int i, j;
	// static int *p[] = {(int *)a, (int *)a + 1, (int *)a + 2};

	// for (i = 0; i < 2;i++)
	// {
	// 	for (j = 0; j < 2; j++)
	// 		printf("%d, %d, %d\n", *(*(p + i) + j), *(*(j + p) + i), *(*(i + p) + j), *(*(p + j) + i));
	// }
	// int arr[10] = {1, 2, 3, 4, 5};
	// printf("%d", arr[5]);

	int c[] = {2, 8, 3, 4, 4, 6.7, 5};
	int j, *p = c, *q = c;

	for (j = 0; j < 5;j++)
	{
		printf("%d", *c);
		++q;
	}

	for (j = 0; j < 5; j++)
	{
		printf("%d", *p);
		++p;
	}

	return 0;
}