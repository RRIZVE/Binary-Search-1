//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    int i,j=1,k,n,t,x=0,y,z,c=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        x=x+5*j;
        j++;
        if(x+k<=240)
        {
            c++;
        }
    }
    cout<<c<<endl;











    return 0;
}
