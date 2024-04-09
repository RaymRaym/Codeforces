#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    unordered_map<int, int> map;
    int a11 = INT_MAX;
    for (int i = 0; i < n*n; i ++) {
        int num; cin >> num;
        map[num] ++;
        a11 = min(a11, num);
    }
    vector<int> starts(n);
    for (int i = 0; i < n; i ++) {
        starts[i] = a11 + i * c;
        // cout << starts[i] << " ";
    }
    // cout << "\n";
    bool isValid = true;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            if (i == 0 && j == 0) continue;
            int cur = starts[i] + j * d;
            if (map[cur] <= 0) {
                isValid = false;
                break;
            }
            map[cur] -= 1;
        }
        if (isValid == false) break;
    }
    if (isValid) cout << "YES\n";
    else cout << "NO\n";
    
    
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i ++) solve();
}
