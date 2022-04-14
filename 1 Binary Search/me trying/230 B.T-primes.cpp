//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

//#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=1e6+123;
long long flag[mx];


int main()
{
    //optimize();
    long long int i,j,k,n,t,x,y,z;
    flag[1]=0;
    for(i=2;i<=mx;i++)
    {
        flag[i]=1;//1 mana prime mona korbo
    }
    for(i=2;i*i<=mx;i++)
    {
        if(flag[i]==1)
        {
            for(j=i*i;j<=mx;j=i+j)
            {
                flag[j]=0;
            }
        }
    }
   cin>>n;
   while(n--)
   {
       cin>>x;
       y=sqrt(x);
       if(y*y==x&&flag[y]==1)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }










    return 0;
}
