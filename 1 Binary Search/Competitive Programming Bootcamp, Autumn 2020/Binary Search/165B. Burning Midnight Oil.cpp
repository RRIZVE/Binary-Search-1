//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;
int a[mx];

int main()
{
    optimize();
    ll n, q, l, r, mid, x, y, i, j, f,k,sum=0;
    cin>>n>>k;
    l = 0;
    r=n;
    while(l<r)
    {
        sum=0;
        mid = (l+r)/2;
        x=k;
        sum=sum+mid;
        while((mid/x)>0)
        {
            sum=sum+(mid/x);
            x=x*k;

        }
        if(sum>=n)
        {
            r = mid;
        }
        else
        {
            l = mid+1;
        }
    }
    cout<<l<<endl;




    return 0;
}
