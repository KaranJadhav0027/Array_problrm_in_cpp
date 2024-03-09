/*
Before the One left rotetion the is :1 4 3 6 8 

After the One left rotetion the is :4 3 6 8 1
*/
#include<bits/stdc++.h>
using namespace std;
 void slove(int arr[],int n)
 {
     int temp[n];
     
      for(int i=1;i<n;i++)
      {
         temp[i-1]=arr[i];
      }
      temp[n-1]=arr[0];
       cout<<"After the One left rotetion the is :";
      for(int i=0;i<n;i++)
       {
        cout<<temp[i]<<" ";
       }
       cout<< endl;
}
int main ()
{
    int n=5;
    int arr[]={1,4,3,6,8};
    cout<<"Before the One left rotetion the is :";
    for(int i=0;i<n;i++)
      {
         cout<< arr[i]<<" ";
      }
     cout<<"\n"<<endl;
    slove(arr,n);
}