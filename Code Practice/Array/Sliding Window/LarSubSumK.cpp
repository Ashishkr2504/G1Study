#include<bits/stdc++.h>
using namespace std;
int varSlid(vector<int>& arr,int n,int k)
{
    int s=0,e=0,sum=0,mk=0;
    while(sum<k)
    {
        sum+=arr[e];
        e++;
    }
    mk=e;
    e--;
    while(e<n)
    {
        if(sum==k)
        {
            s++;
            e++;
            sum-=arr[s];
            sum+=arr[e];
            mk=max(mk,e-s);
        }
        else if(sum>k)
        {
        sum+=arr[e];
        sum-=arr[s];
            e++;s++;
        }
        else
        {
            sum+=arr[e];
            e++;
        }
    }
}
int main()
{
    vector<int> arr={4,1,1,1,2,2,5};
    cout<<varSlid(arr,arr.size(),5);
}