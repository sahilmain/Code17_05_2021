
#include <iostream>
using namespace std;

int PowRec(int n,int p)
{
	if (p == 0)
		return 1;
	return n * PowRec(n, p-1);
}
int main()
{
	cout << PowRec(5,3);
	return 0;
}