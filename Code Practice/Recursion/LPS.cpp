#include<iostream>
using namespace std;
int rec(string str,int beg,int end)
{
    if(beg<end)
    return 0;
if(beg==end)
return 1;
if(str[beg]==str[end])
return rec(str,beg+1,end-1)+2;
else
return rec(str,beg+1,end)+rec(str,beg,end-1);
}
int main()
{
cout<<rec("BBABCBCAB",0,9);
}