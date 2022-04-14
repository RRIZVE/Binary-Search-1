#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
//#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e6+123;
long long a[mx];
long long n;

bool cheak(long long value)
{
    for(int i=1;i<=n;i++)
    {
        value=value+a[i];
        if(value<=0)
            return 0;
    }
    return 1;

}



int main()
{
    //optimize();
    long long t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        long long l=1,r=1e14;

        long long ans;

        while(l<=r)
        {
            long long mid = (l+r)>>1;
            if(cheak(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }

        }
        cout<<"Scenario #"<<tc<<": "<<ans<<endl;



    }













    return 0;
}


