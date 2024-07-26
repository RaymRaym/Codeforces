#include <iostream>

using namespace std;

int solve(int n, int k) {
    if (k == 0) return 0;
    int res = 0;
    for (int i = n; i >= 1; --i) {
        if (i == n) {
            k -= i;
            res += 1;
            if (k <= 0) return res;
        }
        else {
            k -= i;
            res += 1;
            if (k <= 0) return res;
            k -= i;
            res += 1;
            if (k <= 0) return res;
        }
    }
    return res;
}
int main() {
    int n;
    // cout << solve(100,239) << "\n";
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int m, k;
        cin >> m >> k;
        cout << solve(m, k) << "\n";
    }

}