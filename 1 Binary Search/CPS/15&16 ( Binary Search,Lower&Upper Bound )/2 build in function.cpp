#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,3,5};

  cout<<binary_search(v.begin(),v.end(),2)<<endl;//1 hoba
  cout<<binary_search(v.begin(),v.end(),8)<<endl;//0 hoba
  cout<<binary_search(v.begin(),v.end(),5)<<endl;//1 hoba
}

