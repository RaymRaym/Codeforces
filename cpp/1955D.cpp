#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    unordered_map<int, int> map;
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i ++) {
        int num; cin >> num;
        map[num] ++;
    }
    int res = 0, cur = 0;
    for (int i = 0; i < n; i ++) {
        if (--map[a[i]] < 0) cur += 1;
        if (i >= m-1) {
            if (m-k >= cur) res += 1;
            int prev = a[i-m+1];
            if (map[prev]++ < 0) cur -= 1;
        }
    }
    cout << res << "\n";
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i ++) solve();
}
