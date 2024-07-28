#include <iostream>

using namespace std;


void solve() {
    int n, k; cin >> n >> k;
    for (int i = 0; i < n; i ++) {
        string s; cin >> s;
        if (i % k != 0) continue;
        string ans;
        for (int j = 0; j < n; j+=k) {
            ans += s[j];
        }
        cout << ans << "\n";
    }
}

int main() {
    int nn; cin >> nn;
    for (int i = 0; i < nn; i ++) {
        solve();
    }
}