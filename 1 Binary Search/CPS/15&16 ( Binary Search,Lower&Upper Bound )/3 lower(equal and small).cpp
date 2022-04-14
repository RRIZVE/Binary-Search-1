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
	vector<int>v = {2, 3, 3, 6};

	//cin >> x;

	x = 4;

	int lower = lower_bound(v.begin(), v.end(), x) - v.begin();

	if (lower > 0)
	{
		xx = v[lower - 1];
		cout << xx << endl;

	}
	if (lower < v.size())
	{
		yy = v[lower];
		cout << yy << endl;

	}














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