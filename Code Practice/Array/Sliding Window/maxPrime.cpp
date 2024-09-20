#include<bits/stdc++.h>
using namespace std;
int pr(int a)
{
    if(a==1)
    return 0;
    for(int i=2;i<=pow(a,1.0/2.0);i++)
    {
        if(a%i==0)
        return 0;
    }
    return 1;
}
int maxP(int arr[],int k,int n)
{
    int s=0,e=0,np=0,mnp=0,l1=0;
    while(e<k)
    {
        if(pr(arr[e]))
        np++;
        e++;
    }
    mnp=np;
    while(e<n)
    {

        if(pr(arr[e]))
        np++;
        if(pr(arr[s]))
        np--;
        s++;
        e++;
        if(mnp<np)
        {
       mnp=np;
       l1=s;
        }
        
        }
    for(int i=l1;i<l1+k;i++)
    cout<<arr[i]<<" ";
    return mnp;
    
}
int main()
{
    int arr[]={12,33,1,2,7,4,7,31,2,19};
    int k=4;
    
    cout<<endl<<maxP(arr,k,10);

}