#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)

using namespace std;

typedef long long ll;

int a[51],b[51];

int main() {
	fastio;
    
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + n);

	int ans = 0;

	for (int i = 0; i < n; i++) {
		ans += a[n - 1 - i] * b[i];
	}

	cout << ans;
}
