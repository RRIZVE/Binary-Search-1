#include<bits/stdc++.h>
using namespace std;
int a[]= {1,2,3,4,5,6,7,8,9,10};
int main()
{
    int i,j,k;
    int n=10;
    int s=12;//seach
    int l=0;
    int r=n-1;
    int mid;
    bool done=0;
    while(l<=r)
    {
        mid=(l+r)/2;

        if(a[mid]==s)
        {
            cout<<mid+1<<endl;
            done=1;
            break;
        }
        else if(a[mid]<s)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

    }
    if(done==0)
        cout<<"Not Found"<<endl;









    return 0;
}

