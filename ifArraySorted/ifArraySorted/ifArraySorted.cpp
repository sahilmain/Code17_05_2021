
#include <iostream>
using namespace std;
bool SortedArr(int arr[], int n)
{
    if (n == 1)
        return 1;
    if (arr[0] < arr[1] && SortedArr(arr + 1, n - 1))
        return 1;
    else
        return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4 ,5};
    cout << SortedArr(arr,5)<<endl;
    return 0;
}
