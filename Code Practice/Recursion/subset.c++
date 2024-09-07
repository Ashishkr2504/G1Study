#include<iostream>
using namespace std;

int set(int arr[],int sum,int n){
    if(sum==0)
    cout<<arr[0];
if(n==0)
return 0;
if(arr[0]>sum)
return set(arr+1,sum,n-1);
else

return (set(arr+1,sum-arr[0],n-1)||set(arr+1,sum,n-1));
}
int  main(){
    int arr[]={1,3,5,6,7};
    int x =set(arr,6,5);
cout<<x;
    
       return 0; 
}
