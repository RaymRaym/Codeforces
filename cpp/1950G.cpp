#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> s(n), g(n);
    vector<string> aa(n), bb(n);
    unordered_map<string, int> map;
    unordered_set<string> set;
    for (int i = 0; i < n; i ++) {
        string a, b; cin >> a >> b;
        // vals.push_back(a); vals.push_back(b);
        set.insert(a); set.insert(b);
        aa[i] = a; bb[i] = b;
    }
    int idx = 0;
    for (string s : set) {
        map[s] = idx ++;
    }
    for (int i = 0; i < n; i ++) {
        s[i] = map[aa[i]];
        g[i] = map[bb[i]];
    }
    // sort(vals.begin(), vals.end());
    // vals.erase(unique(vals.begin(), vals.end()), vals.end());
    // for (auto& v : vals) {
    //     cout << v << endl;
    // }
    // for (int i = 0; i < n; i ++) {
    //     s[i] = lower_bound(vals.begin(), vals.end(), aa[i]) - vals.begin();
    //     g[i] = lower_bound(vals.begin(), vals.end(), bb[i]) - vals.begin();
    // }
    // for (int i = 0 ; i < n; i ++) {
    //     cout << s[i] << " " << g[i] << endl;
    // }
    vector<vector<int>> dp(1 << n, vector<int>(n, 0));
    for (int i = 0; i < n; i ++) dp[1 << i][i] = 1;
    for (int mask = 0; mask < (1 << n); mask ++) {
        for (int lst = 0; lst < n; lst ++) {
            if (!dp[mask][lst]) continue;
            for (int i = 0; i < n; i ++) {
                if (mask >> i & 1) continue;
                if (s[lst] == s[i] || g[lst] == g[i]) {
                    dp[mask | (1 << i)][i] |= dp[mask][lst];
                }
            }
        }
    }
    int ans = 0;
    for (int mask = 0; mask < (1 << n); mask ++) {
        for (int i = 0; i < n; i ++) {
            if (dp[mask][i]) {
                ans = max(ans, __builtin_popcount(mask));
            }
        }
    }
    cout << n-ans << "\n";


}

int main() {
    int n; cin >> n;
    while (n--) solve();
}