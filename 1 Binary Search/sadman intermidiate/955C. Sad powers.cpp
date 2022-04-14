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

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(v) v.begin(),v.end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}





void solve()
{
	int t;
	cin >> t;
	ll i, j, k , n, m, x, y, z, c = 0, cnt = 0, u;
	string s;
	vector<ll>v;
	map<ll, ll>mp;
	ll mx = 1e18;
	for (ll i = 2; i <= 1e6  ; i++)
	{
		for (ll u = i * i * i; u <= mx ; u = u * i)
		{


			//cout << u << endl;

			ll uu = sqrt(u);
			if (uu * uu != u)
			{
				v.pb(u);
			}

			if (u > (mx / i))
				break;


		}
		//cout << endl;


	}
	sort(all(v));
	v.erase(unique(all(v)), v.end());

	while (t--)
	{
		ll L, R;
		cin >> L >> R;

		ll res = upper_bound(all(v), R) - lower_bound(all(v), L);
		ll sss = (ll)sqrt(R) - (ll)sqrt(L - 1);

		cout << res + sss << endl;



















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