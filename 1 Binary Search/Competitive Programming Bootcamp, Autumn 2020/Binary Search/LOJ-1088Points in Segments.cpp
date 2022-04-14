//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
//#define optimize() ios_base::sync_with_stdio(0);

typedef long long ll;


int main()
{
    //optimize();
    int t,m;
    cin>>t;
    for(m=1;m<=t;m++)
    {
        cout<<"Case "<<m<<":"<<endl;
        int i,j,k,n,x,y,z,q,a,b,c,d,e,f;
        string s;
        vector<ll>v;
        cin>>n>>q;
        for(i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);

        }
        for(i=0; i<q; i++)
        {
            cin>>a>>b;
            ll lower=lower_bound(v.begin(),v.end(),a)-v.begin();
            ll upper=upper_bound(v.begin(),v.end(),b)-v.begin();
            cout<<upper-lower<<endl;

        }
    }











    return 0;
}
