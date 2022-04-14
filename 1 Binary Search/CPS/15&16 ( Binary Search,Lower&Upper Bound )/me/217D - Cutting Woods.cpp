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

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0, q;
	ll xx, yy, zz, qq, ww;

	set<int> s;
	set<int>::iterator itlow, itup;

	cin >> n >> q;

	s.insert(0);
	s.insert(n);

	while (q--)
	{
		cin >> c ;
		if (c == 1)
		{
			cin >> x;
			s.insert(x);




		}
		if (c == 2)
		{
			cin >> x;
			itlow = s.lower_bound (x);

			if (*(itlow) > x) itlow--;

			itup = s.upper_bound (x);

			cout << *itup - *itlow << endl;



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