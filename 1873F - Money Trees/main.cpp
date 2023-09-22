#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
#include <cstring>
#include <map>
#include <cmath>
#include <queue>

using namespace std;
typedef long long ll;
#define endl "\n";

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    int l=0, r=1, tmp=0, ans=0;
    for (int i=0; i<n; i++) {
        cin >> b[i];
        if (b[i] <= k) ans = 1;
    }
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    tmp = b[0];

    while (r<n) {
        // while a[r-1] is divisible by a[r]
        while (r < n && a[r-1] % a[r] == 0) {
            if (tmp + b[r] > k) break;
            tmp += b[r];
            ans = max(ans, r-l+1);
            r++;
        }

        if (r == n) break;

        // cout << l << " " << r << endl;

        if (a[r-1] % a[r] != 0) {
            l = r;
            r++;
            tmp = b[l];
        } else {
            tmp -= b[l];
            l++;
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
