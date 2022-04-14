//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    int i,j,k,n,t,ans,a,b,x,y;
    ans = a = b = x = y = 0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>k;

        if (k == 1)
        {
            if (x == 0)
            {
                a = 0;
                x = 1;
            }

            ++a;
            x = 1;
            y = 0;
        }
        else
        {
            if (y == 0)
            {
                b = 0;
                y = 1;
            }

            y = 1;
            x = 0;
            ++b;
        }

        ans = max (ans, min (a,b));
    }
    cout<<ans*2<<endl;

}











