#include<bits/stdc++.h>
using namespace std;
//compexcity log2n
int main()
{
    vector<int>v= {1,2,3,3,3,4};

    int upper=upper_bound(v.begin(),v.end(),3)-v.begin();
    cout<<upper<<endl;//5


   // int lower1=lower_bound(v.begin()+1,v.end()+4,3)-v.begin();
    //cout<<lower1<<endl;//2








    return 0;
}

