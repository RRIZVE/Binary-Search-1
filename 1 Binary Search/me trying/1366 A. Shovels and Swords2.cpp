//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    long long int i,j,k,n,t,x,y,z,c,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        x=(a+b)/3;
        if(a > b)
            swap(a,b);
        if(a==0||b==0)
            cout<<0<<endl;
        else if(a*2 <= b)
        {
            cout<<a<<endl;

        }
        else
            cout<<x<<endl;






    }
}
