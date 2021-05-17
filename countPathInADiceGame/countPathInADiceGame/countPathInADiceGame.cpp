#include <iostream>
using namespace std;

int countPaths(int s, int e)
{
	if (s == e)
		return 1;
	if (s > e)
		return 0;
	int sum = 0;
	for (int i = 1; i <= 6; i++)
	{
		sum += countPaths(s + i, e);
	}
	return sum;
}
int main()
{
	cout << countPaths(0, 9);
	return 0;
}