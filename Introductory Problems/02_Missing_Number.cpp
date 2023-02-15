/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/

#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define printV(a)      for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.str << endl
#define Y              "YES"
#define N              "NO"


/*==============================Helix0263==============================*/

void solve() {
	int n;
	cin >> n;
	vi v;
	for (int i = 0; i < n - 1; i++) {
		int x;
		cin >> x;
		v.pb(x);
	}
	for (int i = 1; i <= n; i++) v.pb(i);

	int ans = 0;
	for (auto i : v) ans ^= i;

	cout << ans;
}

signed main() {
	solve();
}
