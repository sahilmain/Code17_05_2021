#include <iostream>
using namespace std;

void reverseStr(string str,int n)
{
	if (n == 0)
		return;
	reverseStr(str.substr(1),n-1);
	cout << str[0] << endl;
}

int main()
{
	reverseStr("SAHIL", 5);
	return 0;
}
