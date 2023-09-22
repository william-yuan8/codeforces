#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int moves = 0;
    for (int i=0; i<n; i++) {
        if (s[i] == 'B') {
            moves++;
            i += k-1;
        }
    } 

    cout << moves << endl;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        solve();
    }
}
 