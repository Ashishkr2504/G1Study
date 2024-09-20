#include<bits/stdc++.h>
using namespace std;
int maxSumSA(int arr[],int k,int n){
    int sum=0;
    int s=0,e=0;
    int result=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
        e++;
    }
    result=sum;
    while(e<n){
        sum+=arr[e]-arr[s];
        result=max(result,sum);
        e++;
        s++;
    }
    return result;
}
int main()
{
    int arr[]={55,3,1,2,8,4,-1,6};
    int k=4;
    cout<<maxSumSA(arr,k,8);

}