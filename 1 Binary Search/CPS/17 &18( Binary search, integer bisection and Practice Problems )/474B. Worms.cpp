//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e5+123;
int a[mx];
int L[mx], R[mx];

int main()
{
    optimize();
    int i,j,k,n,t,x,y,z,first=0;
    string s;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        L[i]=first+1;
        R[i]=first+a[i];
        first=R[i];

    }
    cin>>x;
    for(i=0; i<x; i++)
    {
        cin>>y;
        int l=1,r=n,ans;

        while(l<=r)
        {
            int mid=l+r>>1;
            if(y>=L[mid]&&y<=R[mid])
            {
                ans=mid;
                break;
            }
            else if(R[mid]>y)
                r=mid-1;
            else
                l=mid+1;




        }
        cout<<ans<<endl;
    }











    return 0;
}
