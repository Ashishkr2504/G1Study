#include<iostream>
using namespace std;
int rec(int arr[],int sum,int n)
{
    if(sum<0)
    return 0;
    if(sum==0)
    return 1;
    if(n==0)
    return 0;
    // if(arr[0]>sum)
    // return rec(arr+1,sum,n-1);
else{
    cout<<arr[0]<<" ";
return rec(arr+1,sum,n-1)||cout<<arr[0],rec(arr+1,sum-arr[0],n-1);
}
}
int main()
{
    int arr[]={3,2,7,1};
    cout<<endl<<rec(arr,9,4);
}