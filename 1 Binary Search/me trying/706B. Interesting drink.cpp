//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;

int main()
{
    optimize();
    ll i,j,k,n,m,t,x,y,z;

    string s;
    cin>>n;
    vector<int>v(n);
    for(i=0; i<n; i++)
    {
        cin>>v[i];

    }
    sort(v.begin(),v.end());
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>x;
        y=lower_bound(v.begin(),v.end(),x+1)-v.begin();
        cout<<y<<endl;


    }











    return 0;
}
