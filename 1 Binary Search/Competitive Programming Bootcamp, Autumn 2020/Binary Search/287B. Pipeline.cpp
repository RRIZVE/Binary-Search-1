#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ld long double
#define PI 2*acos(0.0)
#define MAX3(a,b,c) max(a,max(b,c))
#define MIN3(a,b,c) min(a,min(b,c))
#define MAX   99999999
#define INF   1<<30
#define EPS   1e-9
#define MOD   1000000007
#define Gcd   __gcd
int main()
{
    ll n,m,k;
    cin >> n >> k;
    m = ((k*(k+1))/2)-k+1;
    if(n==1)
        cout << "0";
    else if(m<n)
        cout << "-1";
    else
    {
        ll l=1,r=k,mid,x;
        while(l<r)
        {
            mid=(l+r)/2;
            x =  ((k*(k+1))/2)-((k-mid)*(k-mid+1))/2;
            x-=(mid-1);
            if(x>=n)
                r=mid;
            else
                l = mid+1;
        }
        cout << l;
    }

}

