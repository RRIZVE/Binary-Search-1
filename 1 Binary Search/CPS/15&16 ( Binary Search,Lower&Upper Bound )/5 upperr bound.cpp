#include<bits/stdc++.h>
using namespace std;
int a[]= {1,2,2,2,3,3,4,5,6};
int main()
{
    int i,j,k;
    int n=9;
    int ter=3;//terget
    int l=0;
    int r=n-1;
    int mid;
    int ans =9;//arrey size
    while(l<=r)
    {
        mid=(l+r)/2;

        if(a[mid]<=ter)
        {

            l=mid+1;
        }
        else
        {
            ans= min(ans,mid);
            r=mid-1;
        }

    }
        cout<<ans<<endl;//6 ans









    return 0;
}

