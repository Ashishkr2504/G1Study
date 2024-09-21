#include<bits/stdc++.h>
using namespace std;

    int singleNonDuplicate(vector<int>& n)
     {
        int beg = 0, end = n.size() - 1, mid = 0;

        while (beg < end) {
            mid = beg + (end - beg) / 2;

            if (mid % 2 != 0) 
            mid--;

            if (n[mid] == n[mid + 1]) {
                beg = mid + 2; 
            } else {
                end = mid; 
            }
        }

        return n[beg];
    }



int main()
{
    vector<int> arr={0,1,1,2,2,5,5};
    cout<<singleNonDuplicate(arr);
}