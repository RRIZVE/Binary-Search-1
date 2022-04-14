//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;



int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,k,n,x=0,y=0,z=0,min=300000,a,b,c,d,e,f,g,h;
        string s;
        cin>>s;
        int len=s.size();
        for(i=0; i<len; i++)
        {
            if(s[i]=='1')
            {
                a=i;
                x=1;
            }
            if(s[i]=='2')
            {
                b=i;
                y=1;

            }
            if(s[i]=='3')
            {
                c=i;
                z=1;

            }
            if(x==1&&y==1&&z==1)
            {
                d=abs(a-b);
                e=abs(a-c);
                f=abs(b-c);

                g=max(d,e);
                h=max(g,f);

                if(h<min)
                {
                    min=h;
                }

                x=0;
                y=0;
                z=0;

                i=i-2;
            }
            if(min+1==3)
            {
                break;
            }


        }
        if(min==300000)
            cout<<0<<endl;
        else
            cout<<min+1<<endl;
    }














    return 0;
}
