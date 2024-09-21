#include<bits/stdc++.h>
using namespace std;
int minSwap(int arr[],int n)
{
    int s=0,e=0,c1=0,c0=0,m1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        c1++;
    }
    while(e<c1)
    {
        if(arr[e]==0)
            c0++;
        e++;
    }
    m1=c0;
    while(e<2*n)
    {
        if(arr[s%n]==0)
        c0--;
        if(arr[e%n]==0)
        c0++;
        s++;
        e++;
        m1=min(m1,c0);
    }
    return m1;
}
int main()
{
    int arr[]={0,1,1,1,0,0,1,1,0};
    cout<<minSwap(arr,9);
}