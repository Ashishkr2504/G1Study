#include<bits/stdc++.h>
using namespace std;
int removeSpace(string str,int n)
{
    int s=0,e=0;
    while(e<n)
    {
        if(str[e]!=' ')
        {
            str[s]=str[e];
            s++;
        }
        e++;
    }
    for(int i=0;i<=s;i++)
    {
        cout<<str[i];
    }
    return s;
}
int main()
{
    string str="IT  IS   HO  TOUTSIDE";
    cout<<endl<<removeSpace(str,str.size());

}