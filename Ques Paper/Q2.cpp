#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={900,925,940,950,1100,1130,1500,1800};
    vector<int> d={910,6000,1200,1120,1130,2500,1900,2000};
    int c=1,min;
    vector<int> out;
    out.push_back(d[0]);
    for(int i=1;i<6;i++)
    {
        sort(out.rbegin(),out.rend());
        min=*min_element(out.begin(),out.end());
        if(a[i]>min)
        out.pop_back();
        else{
        c++;
        }
        out.push_back(d[i]);
    }
    cout<<c;
    return 0;
}