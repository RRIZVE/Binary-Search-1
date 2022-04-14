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




void solve()
{
	int t;
	cin >> t;
	while (t--)
	{

		ll i, j, k , n, m, x, y, z, c = 0, cnt = 0, l, r, ans = 0;
		string s;
		cin >> n >> l >> r;
		vector<ll>a(n);
		for ( i = 0; i < n; i++)
		{
			cin >> a[i];

		}
		sort(a.begin(), a.end());

		for ( i = 0; i < n - 1 ; i++)
		{
			int lower = lower_bound((a.begin() + i + 1 ), a.end(), l - a[i]) - a.begin();

			int upper = upper_bound((a.begin() + i + 1 ), a.end(), r - a[i]) - a.begin();

			ans = ans + (upper - lower) ;



		}
		cout << ans << endl;



















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