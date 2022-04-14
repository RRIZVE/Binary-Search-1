//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int mx = 1e6;
int a[mx];



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	ll xx, yy, zz, qq, ww;
	n = 4;
	vector<int>v = {2, 3, 3, 6};

	cin >> x;

	int upper = upper_bound(v.begin(), v.end(), x) - v.begin();

	if (upper >= v.size())
	{
		xx = v[v.size() - 1];

	}
	else if (upper == 0)
	{
		xx = v [0];
	}
	else if (upper >= (n - 1))
	{
		xx = v [n - 1];
	}
	else if ( v[upper] == x)  //2
		xx = v[upper + 1];
	else
		xx = v[upper] ;

	cout << xx << endl;










}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}