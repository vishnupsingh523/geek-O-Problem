#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print(s, size)                       \
	for (int i = 0; i <= size; i++) \
		{\
			cout << s.top() << " ";\
			s.pop();\
		}

int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout << "-> ";
	print(s,s.size());
	// s.pop();

	s.push(20);
	s.push(50);
	s.push(25);
	cout << endl<< "-> ";
	print(s, s.size());

	cout << "empty: " << s.empty();
	return 0;
}