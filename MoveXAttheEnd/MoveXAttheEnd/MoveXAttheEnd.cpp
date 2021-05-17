#include <iostream>
using namespace std;

string Fn(string str)
{
    if (str.length() == 0)
        return "";
    char ch = str[0];
    string s = Fn(str.substr(1));
    if (ch == 'x')
        return s + ch;
    else
        return ch + s;

}
int main()
{
    cout << Fn("abxxcxxcdsdgfhccxxxccxcxyxktsxmxxx"); return 0;
}