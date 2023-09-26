#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll ans = 1;
    a[0]++;
    for (int i : a) {
        ans *= i;
    }
    cout << ans << endl;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        solve();
    }
}
 