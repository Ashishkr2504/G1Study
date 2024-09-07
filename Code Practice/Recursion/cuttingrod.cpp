#include<iostream>
#include <algorithm>
#include <climits>
using namespace std;

int rec(int p[], int n)
{
    
    if(n<=0)
    return 0;
    int m=INT_MIN;
    for(int i=1;i<=n;i++)
    m=max(m,p[i-1]+rec(p,n-i));
return m;


}
int main()
{
    int a[]={1,5,8,9};
    cout<<rec(a,4);
}