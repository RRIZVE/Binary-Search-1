//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    optimize();
    long long int i,j,k,n,t,x,y,z;
    string s;
    cin>>n;
    long long l=1,r=n,mid;
    while(l<=r)
    {
        mid=l+r>>1;
        if(mid*mid>n-1)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    cout<<r<<endl;
    return 0;
}
