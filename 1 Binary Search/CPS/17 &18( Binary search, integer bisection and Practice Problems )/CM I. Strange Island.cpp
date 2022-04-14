//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

//t*m*log2(n)
//150*10^4*30==4.5*10^7

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e4+123;
int a[mx];

int n,m,k;

bool cheak(int m,int k,int d)
{
    int last=a[1]+d;
    k--;
    int i;
    for(i=2;i<=m;i++)
    {
        if(abs(last-a[i])>d)
        {

            if(k==0)
            {
                return 0;
            }
            else
            {
                last=a[i]+d;

            }
             k--;
        }
    }
    return 1;
}

int main()
{
    optimize();
    int i,j,t,x,y,z;
    string s;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
    cin>>n>>m>>k;
    for(i=1;i<=m;i++)
    {
        cin>>a[i];
    }
    int l=0,r=n,ans=0,mid;
    while(l<=r)
    {
        mid=l+r>>1;
        if(cheak(m,k,mid)==1)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<"Case"<<tc<<" : "<<ans<<endl;

    }











    return 0;
}
