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

int color[4001];

vector<int> graph[4001];

ll ans = 0;

int count(int n, int sum, int p) {
    if (graph[n].size() == 1 && p != 0) {
        return color[n];
    }

    for (int i : graph[n]) {
        if (i != p) {
            sum += count(i, 0, n);
        }
    }

    sum += color[n];
    if (sum == 0) {
        ans++;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;

    ans = 0;
    int x;
    for (int i=2; i<=n; i++) {
        cin >> x;
        graph[x].push_back(i);
        graph[i].push_back(x);
    }
    string s;
    cin >> s;
    for (int i=1; i<=n; i++) {
        color[i] = (s[i-1] == 'W' ? 1 : -1);
    }

    count(1, 0, 0);

    cout << ans << endl;
    for (int i=1; i<=n; i++) {
        graph[i].clear();
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}