#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		double ds, dt, d;
		cin >> ds >> dt >> d;
		// 0.0: ds + dt > d (triangle inequality)
		// d - ds - dt: d >= ds + dt
		// ds - d - dt: ds >= d + dt
		// dt - d - ds: dt >= d + ds
		cout << max({0.0, d - ds - dt, ds - d - dt, dt - d - ds}) << '\n';
	}
	return 0;
}
