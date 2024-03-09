/*
 To find Largest element inm given array

The Largest element in array is :57

The Largest element in array is :55
*/

/*#include <bits/stdc++.h>
 
using namespace std;
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}*/


#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}
int main()
{
    vector<int> arr1 = {1, 3, 4, 57, 9, 3};
    vector<int> arr2 = {5, 3, 8, 1, 9, 55, 8};

    cout << "\nThe Largest element in array is :" << sortArr(arr1) << endl;
    cout << "\nThe Largest element in array is :" << sortArr(arr2);
    return 0;
}
