/*
Before Moving  Array is: 
1 0 2 0 5 0 4 0 0 3
 After Moving  Array is :
1 2 5 4 3 0 0 0 0 0
*/
#include<bits/stdc++.h>
using namespace std;

vector<int>movezeros(int n,vector<int>a)
{
     vector<int>temp;
     for(int i=0;i<n;i++)
     {
        if(a[i]!=0)
        temp.push_back(a[i]);
     }
    int nz=temp.size();
    for(int i=0;i<nz;i++)
    {
       a[i]=temp[i];
    }
    for(int i=nz;i<n;i++)
    {
        a[i]=0;
    }
    return a;
}
int main()
{
    vector<int>arr={1,0,2,0,5,0,4,0,0,3};
    int n=10;
    cout << "Before Moving  Array is: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout <<"After Moving  Array is :" << endl;
    vector<int>ans=movezeros(n,arr);
    for(auto &it:ans)
    {
        cout<<it<<" ";
    }
    cout<<" \n";
    return 0;

}