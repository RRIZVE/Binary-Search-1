#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, q, l, r, mid, x, y, i, j, f;
    ll a[]= {1,2,2,3,3,3,4,5,6};
    n=9;
    x=3;
    l = 0;
    r=n-1;
    while(l<r)
    {
        mid = (l+r)/2;
        if(a[mid]>=x)
        {
            r = mid;
        }
        else
        {
            l = mid+1;
        }
    }

    cout<<"Lower bound of x "<<l<<endl;//3

    l = 0, r=n-1;

    while(l<r)
    {
        mid = (l+r+1)/2;
        if(a[mid]<=x)
        {
            l = mid;
        }
        else
        {
            r = mid-1;
        }
    }
    cout<<"Upper bound of x "<<r+1<<endl;//6

}
