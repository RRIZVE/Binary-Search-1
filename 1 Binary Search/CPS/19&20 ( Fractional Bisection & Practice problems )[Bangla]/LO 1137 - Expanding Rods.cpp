//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


int main()
{
    optimize();
    int t,tc;
    cin>>t;
    for(tc=1;tc<=t;tc++)
    {

    double L,N,C;
    cin>>L>>N>>C;

    //1+n*C)*L
    double L1=((1+(N*C))*L);

    double l=0,r=1e18;

    for(int i=0; i<100; i++)
    {
        double R=(l+r)/2;

        double ans = R*2.0*asin(L/(2.0*R));

        if(ans<L1)
        {
            r=R;
        }
        else
        {
            l=R;
        }
    }

    double R=l;
    //double h = R-sqrt((L/2)*(L/2)-R*R);
    double h = R - sqrt ( ( R * R ) - ( ( L / 2.0 ) * ( L / 2.0 ) ) );


    fraction();

    cout<<"Case "<<tc<<": "<<h<<endl;
    }










    return 0;
}
