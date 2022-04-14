//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z,c,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {
            x=b;
            y=a;
        }
        else
        {
            x=a;
            y=b;
        }
        k=1;
        c=0;
        while(1)
        {
            if(x<=0||y<=0)
            {
                break;
            }
            if(k==1)
            {
                x=x-2;
                y=y-1;

                c++;
                k=0;
            }
            else
            {
                x=x-1;
                y=y-2;

                c++;
                k=1;
            }

        }
        cout<<c<<endl;
    }











    return 0;
}
