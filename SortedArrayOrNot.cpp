/*
False
*/
#include<bits/stdc++.h>
using namespace std;

bool issorted (int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
         if(arr[i]<arr[i-1])
         return false;
    }
    return true;
 }
 int main (){
     int arr[]={1,2,3,4,6,3,},n=6;

    printf("%s",issorted(arr,n)?"true":"False");

 }
