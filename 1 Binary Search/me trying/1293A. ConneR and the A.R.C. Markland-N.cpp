//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z,a,b,c,d,e,f;
    cin>>t;
    while(t--)
    {

        set<long long >s;
        cin>>n>>a>>b;
        for(i=1; i<=b; i++)
        {
            cin>>x;
            s.insert(x);
        }
        int a1=0,a2=0;
        if(s.find(a) == s.end())
        {
            cout << 0 << endl;
            continue;
        }
        for(i=a; i<=n; i++)
        {
            if(s.find(i) == s.end())
            {
                a2 = i;
                break;
            }
        }
        for (i = a - 1; i > 0; i--)
        {
            if(s.find(i) == s.end())
            {
                a1 = i;
                break;
            }
        }

        if(a1 == 0)
        {
            cout << abs(a - a2) << endl;
            continue;
        }
        if(a2 == 0)
        {
            cout << abs(a - a1) << endl;
            continue;
        }

        a1 = abs(a - a1);
        a2 = abs(a - a2);

        long long ans = min(a1, a2);

        cout<<ans<<endl;


    }

}
