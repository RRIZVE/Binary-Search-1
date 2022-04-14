//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


int main()
{
    optimize();

    int t,i;
    cin>>t;
    for(int tc=1; tc<=t; tc++)
    {
        double AB,AC,BC,R;
        cin>>AB>>AC>>BC>>R;

        double l=0,r=AB;


        for(i=0; i<100; i++)
        {
            double AD=(l+r)/2.0;

            double x=AD/AB;

            double AE=AC*x;
            double DE=BC*x;



            //paramiter1
            double p1 = (AB+AC+BC)/2.0;
            double areaABC = sqrt(p1*(p1-AB)*(p1-AC)*(p1-BC));//areaof ABC

            double p2 = (AD+AE+DE)/2.0;
            double areaADE = sqrt(p2*(p2-AD)*(p2-AE)*(p2-DE));

            //areaTra==Area of treangle
            double areaTra=areaABC-areaADE;

            if((areaADE/areaTra)>R)
            {
                r=AD;
            }
            else
            {
                l=AD;
            }


        }

        fraction();
        cout<<"Case "<<tc<<": "<<l<<endl;
    }












    return 0;
}

