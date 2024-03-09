/*
Before Rotation :
1 2 3 4 5 6 7
After 'D' Rotation :
3 4 5 6 7 1 2
*/
#include <bits/stdc++.h>
using namespace std;
void leftRotate(int arr[], int n, int d)
{
    if (n == 0)
        return;

    d = d % n;
    if (d == 0)
        return;

    int temp[d];

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++) 
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}
int main()
{
    int n = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;

    cout << "Before Rotation :" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    leftRotate(arr, n, d);
    cout << "After 'D' Rotation :" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
