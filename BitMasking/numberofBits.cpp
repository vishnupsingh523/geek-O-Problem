#include<bits/stdc++.h>
using namespace std;
#define ll long long

int numbersOfBits(int n){
	long long mask = (1<<31);
        int count =0;
        
        for(int i=30;i>=0;i--)
        {
			mask = (1<<i);
            if(mask & n)
                count++;
			cout << mask << endl;
        }
        
        return count;
}

int main()
{
	int a = 10;
	cout << numbersOfBits(a);
	return 0;
}