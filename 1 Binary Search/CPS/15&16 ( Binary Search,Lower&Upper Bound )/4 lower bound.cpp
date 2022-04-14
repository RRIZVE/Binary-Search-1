#include<bits/stdc++.h>
using namespace std;
int a[]= {1,2,2,3,3,3,4};
int main()
{
    int i,j,k;
    int n=10;
    int ter=3;//terget
    int l=0;
    int r=n-1;
    int mid;
    int ans =7;//arrey size
    while(l<=r)
    {
        mid=(l+r)/2;

        if(a[mid]>=ter)
        {
           ans= min(ans,mid);
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
        cout<<ans<<endl;//3 ans









    return 0;
}

