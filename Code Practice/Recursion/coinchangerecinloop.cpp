#include<iostream>
#include <climits> 
#include <vector> 
using namespace std;

#define MAX 500
    vector<int> v;
int rec(int *coin,int n,int s)
{
    int temp=s;
    if(s==0)
     return 0;
 
int res=MAX;
for(int i=0;i<=n;i++)
{
    if(coin[i]<=s)
{
    cout<<"temp:"<<temp<<endl;
    temp=rec(coin,n,s-coin[i]);
    v.push_back(coin[i]);
    // cout<<v[i];
    cout<<"temp:"<<temp<<endl;
    if(temp+1<res)
    res=temp+1;
}
}
return res;
}
int main()
{
    int coin[]={1,2},min;
   min= rec(coin,2,5);
for(int i=0;i<min;i++)
cout<<v[i];
   cout<<endl<<min;
   return 0;
}