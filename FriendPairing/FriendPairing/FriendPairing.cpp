#include <iostream>
using namespace std;

int func(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return n;
    return func(n - 1) + func(n - 2) * (n - 1);

}
int main()
{
    cout << func(4);
}
