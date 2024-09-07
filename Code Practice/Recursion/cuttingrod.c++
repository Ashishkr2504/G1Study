#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int rec(int arr[],int n){
    if(n<=0)
    return 0;
int maxvalue=INT_MIN;
for(int i=1;i<=n;i++){
     maxvalue=max(maxvalue,arr[i-1]+rec(arr,n-i));
     
}
return maxvalue;
}
int main(){
    int arr[]={1,5,8,9};
    cout<<rec(arr,4);

}