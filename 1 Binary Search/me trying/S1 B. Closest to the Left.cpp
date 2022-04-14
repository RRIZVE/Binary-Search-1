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
	cin >> n ;
	vector<ll>v;
	for ( i = 1; i <= n ; i++)
	{
		cin >> x;
		v.push_back(x);

	}
	sort(v.begin(), v.end());
	cin >> k;
	for ( i = 1; i <= k ; i++)
	{
		cin >> x >> y;

		ll lower = lower_bound(v.begin(), v.end(), x) - v.begin();
		ll upper = upper_bound(v.begin(), v.end(), y) - v.begin();

		cout << upper - lower << " ";



	}
	cout << endl;








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