#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s;
    cin >> s;

    int wrong = (s[0] != 'a') + (s[1] != 'b') + (s[2] != 'c');

    cout << (wrong == 3 ? "NO" : "YES") << endl;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        solve();
    }
}
 