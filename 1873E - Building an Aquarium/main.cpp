#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll used = 0;
    int ind = 0, h = a[0];
    while (ind+1 < n) {
        ll add = (a[ind+1] - a[ind])*(ind+1);
        if (used + add > x) {
            cout << h + (x-used)/(ind+1) << endl;
            return;
        }

        used += add;
        h += (a[ind+1] - a[ind]);
        ind++;
    }

    h += (x-used)/n;
    cout << h << endl;
    
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        solve();
    }
}
 