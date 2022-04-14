#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

long long getSum(long long n)
{
    return (n*(n+1))>>1;
}

int main()
{
    optimize();
    long long i,j,k,n,t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>y;
        long long l=1,r=1e5,ans=-1;


        while(l<=r)
        {
            long long mid = (l+r)>>1;

            if(getSum(mid)==y)
            {
                ans=mid;
                break;
            }
            if(getSum(mid)<y)
            {
                 l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(ans==-1)
            cout<<"NAI"<<endl;
        else
            cout<<ans<<endl;

    }












    return 0;
}

