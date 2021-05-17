#include <iostream>
using namespace std;

void Fun(int n)
{
if(n==1)
{
	cout << "1" << endl; return;
}
//call first statements later
Fun(n - 1);
cout << n << endl;
}

void Nofun(int n)
{
	if(n==1)
	{
		cout << "1" << endl; return;
	}

	//statements first call later
	cout << n << endl;
	Nofun(n - 1);
	
}
int main()
{
	Fun(10);
	Nofun(9);
	return 0;
}