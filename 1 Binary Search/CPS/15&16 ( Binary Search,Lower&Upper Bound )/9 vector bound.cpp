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

	vector<int> v;
	vector<int>::iterator itlow, itup;

	for (int i = 1; i < 10; i++)
	{
		v.push_back(i * 10); // 10 20 30 40 50 60 70 80 90
	}


	itlow = lower_bound(v.begin(), v.end(), 30);
	itup = upper_bound(v.begin(), v.end(), 30);
	cout << *itup << endl;//>>>40
	cout << *itlow << endl;//>>>30

	cout << endl;

	itlow = lower_bound(v.begin(), v.end(), 35);
	itup = upper_bound(v.begin(), v.end(), 35);
	cout << *itup << endl;//>>>40
	cout << *itlow << endl;//>>>40

	cout << endl;


	itlow = lower_bound(v.begin(), v.end(), 35);
	if (*(itlow) > 35) itlow--;
	itup = upper_bound(v.begin(), v.end(), 35);
	cout << *itup << endl;//>>>40
	cout << *itlow << endl;//>>>30

	cout << endl;


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