#include<bits/stdc++.h>
using namespace std;


long binaryToDecimal(long long binary)
{
	long dec = 0;
	int count = 0;
	// for (int i = binary.size() - 1; i >= 0; i++)
	// {
	// 	if(binary[i]=='1')
	// 		dec = dec + 2 << count;

	// 	count++;
	// }

	while(binary!=0)
	{
		
	}

	return dec;
}

int main()
{
	// long dec;
	long long binary;


	cout << "Enter binary no: ";
	cin >> binary;

	cout << "\nConverted decimal : " << binaryToDecimal(binary);
}