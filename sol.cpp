#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		vector<int> a(4);
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		// sort the array in non-decreasing order
		sort(a.begin(), a.end());
		// multipy the minimum between (a[0] or a[1]) and (a[2] or a[3])
		cout << min(a[0], a[1]) * min(a[2], a[3]) << '\n';
	}
	return 0;
}
