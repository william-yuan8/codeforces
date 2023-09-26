#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int grid[10][10];

void solve() {
    int n = 10;
    for (int i=0; i<10; i++) {
        string s;
        cin >> s;
        for (int j=0; j<10; j++) {
            grid[i][j] = (s[j] == 'X');
        }
    }

    ll points = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (grid[i][j]) {
                int x = min({i, j, 9-i, 9-j});
                points += x + 1;
            }
        }
    }    

    cout << points << endl;
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        solve();
    }
}

