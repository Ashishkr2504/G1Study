#include<iostream>
#include <algorithm>
using namespace std;

int rec(string str1,string str2,int l1,int l2)
{
    if(l1==0)
    return l2;
if(l2==0)
    return l1;
if(str1[l1-1]==str2[l2-1])
return rec(str1,str2,l1-1,l2-1);
int d,u,i;
d=rec(str1,str2,l1-1,l2);
u=rec(str1,str2,l1-1,l2-1);
i=rec(str1,str2,l1,l2-1);
int m=min(d,u);
m=min(m,i);
return m+1;
}
int main()
{
int m=rec("qTMAY","DAY",5,3);
cout<<m;
return 0;
}