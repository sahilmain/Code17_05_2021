#include <iostream>
#include <string.h>
using namespace std;

void swap(char* x, char* y)
{
    char t = *x;
    *x = *y;
    *y = t;
}
void permute(char *p, int l, int r)
{
    if (l == r)
    {
        cout << p <<endl;
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(p+l, p+i);
            permute(p, l+1, r);
            swap(p+l,p+i);
        }
    }
}
int main()
{
    char str[] = "abc";
    permute(str,0,2);
}
