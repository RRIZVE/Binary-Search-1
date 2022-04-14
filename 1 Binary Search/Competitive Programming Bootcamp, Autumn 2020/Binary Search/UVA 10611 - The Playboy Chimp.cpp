//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;
//int a[mx];

int main()
{
    //optimize();
    ll i,j,k,n,m,t,x,y,z,a,b,c,d;
    cin>>n;
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        cin>>y;
        v.push_back(y);

    }
    c=v[0];
    d=v[n-1];
    //cout<<c<<" "<<d<<endl;
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>x;
        ll lower=lower_bound(v.begin(),v.end(),x)-v.begin();
        ll upper=upper_bound(v.begin(),v.end(),x)-v.begin();
        //cout<<lower<<" "<<upper<<endl;
        //cout<<v[lower-1]<<" "<<v[upper]<<endl;
        a=v[lower-1];
        b=v[upper];
        if(c>=x)
            cout<<"X"<<" ";
        else
            cout<<a<<" ";
        if(d<=x)
            cout<<"X";
        else
            cout<<b;
        cout<<endl;

    }











    return 0;
}
