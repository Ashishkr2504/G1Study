#include<iostream>
using namespace std;
int path(int m,int n)
{
    if((m==0)&&(n==0))
    return 0;
if((m==0)||(n==0))
    return 1;

return path(m-1,n)+path(m,n-1);
}
int main()
{
    cout<<path(1,2);
}