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

	set<int> s;
	set<int>::iterator itlow, itup;

	for (int i = 1; i < 10; i++)
	{
		s.insert(i * 10); // 10 20 30 40 50 60 70 80 90
	}


	itlow = s.lower_bound (30);
	itup = s.upper_bound (30);
	cout << *itup << endl;//>>>40
	cout << *itlow << endl;//>>>30

	cout << endl;


	itlow = s.lower_bound (35);
	itup = s.upper_bound (35);
	cout << *itup << endl;//>>>40
	cout << *itlow << endl;//>>>40

	cout << endl;


	itlow = s.lower_bound (35);
	if (*(itlow) > 35) itlow--;
	itup = s.upper_bound (35);
	cout << *itup << endl;//>>>40
	cout << *itlow << endl;//>>>30


	/*

	40
	30

	40
	40

	40
	30
	*/








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