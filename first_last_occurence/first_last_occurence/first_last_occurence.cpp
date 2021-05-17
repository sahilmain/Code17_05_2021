#include <iostream>
using namespace std;

int first(int arr[], int n, int i, int k)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == k)
        return i;
    return first(arr, n, i + 1, k);
}

int last(int arr[], int n, int i, int key)
{
    if (i == -1)
        return -1;
   
    if (arr[i] == key)
        return i;
    return last(arr,n,i-1,key);

}
int main()
{
    int arr[] = { 1,2,3,4,5,3,3,3,690 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << first(arr, n, 0, 3)<<endl;
    cout << last(arr, n, n-1, 3) << endl;
    return 0;
}
