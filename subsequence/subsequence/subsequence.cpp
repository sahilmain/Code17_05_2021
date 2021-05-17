#include<iostream>
using namespace std;
void Func(string s, string ans)
{
	if (s.length() == 0)
	{
		cout << ans << " ";
		return;
	}
	char ch = s[0];
	string ros = s.substr(1);
	Func(ros, ans);
	Func(ros, ans + ch);
}
int main()
{
	Func("ABC", "");
	return 0;
}