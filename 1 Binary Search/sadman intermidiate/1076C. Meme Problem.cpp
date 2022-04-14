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
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

#define fraction() cout.unsetf(ios::floatfield); cout.precision(12); cout.setf(ios::fixed,ios::floatfield);



void solve()
{
	int t;
	cin >> t;
	while (t--)
	{

		ld i, j, k , n, m, x, y, z, c = 0, cnt = 0, d;
		string s;
		cin >> d;
		if (d == 0)
		{
			cout << "Y" << " " << "0.000000000" << " " << "0.000000000" << endl;
			continue;
		}
		fraction();
		ld a = d * 1.0 + sqrt(d * d * 1.0 - 4.0 * d);
		a = a / 2.0;
		ld b = d - a;
		//cout << a << " " << b << endl;
		if (abs((a + b) - d) <= 0.000000000001)
		{
			cout << "Y" << " " << a << " " << b << endl;
		}
		else
		{
			cout << "N" << endl;

		}



















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