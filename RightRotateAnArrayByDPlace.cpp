/*
Before Rotation  Array is: 
1 2 3 4 5 6 7 
After Rotation Array is :
5 6 7 1 2 3 4 

*/
#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n, int d)
{
    if (n == 0)
        return;

    d = d % n;
    if (d == 0)
        return;

    int temp[d];

    for (int i = n - d; i < n; i++)
    {
        temp[i - (n - d)] = arr[i];
    }
    for (int i = n - d - 1; i >= 0; i--)
    {
        arr[i + d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 3;
    cout << "Before Rotation  Array is: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    rightRotate(arr, n, d);
    cout << " After Rotation Array is :" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
