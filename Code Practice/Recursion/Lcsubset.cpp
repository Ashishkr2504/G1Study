#include<iostream>
using namespace std;

int rec(string str1,string str2,int l1,int l2)
{
    if((l1==0)||(l2==0))
    return 0;
else if(str1[l1-1]==str2[l2-1])
return (1+rec(str1,str2,l1-1,l2-1));
else
return max(rec(str1,str2,l1-1,l2),rec(str1,str2,l1,l2-1));
}
int main()
{
    string str1="ABCDEF";
    string str2="ABCDEF";
    cout<<rec(str1,str2,6,6);
}