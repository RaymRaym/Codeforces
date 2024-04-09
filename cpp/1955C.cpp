#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> vec(n);
    long long sum = 0;
    for (int i = 0; i < n; i ++) {
        cin >> vec[i];  sum += vec[i];
    }
    if (sum <= k) {
        cout << n << "\n";
        return;
    } 
    int right = k/2;
    int left = k-k/2;
    int l = 0, r = n-1;
    int res = 0;
    while (left > 0) {
        if (vec[l] <= left) {
            left -= vec[l];
            res += 1;
            l += 1;
        } else break;
    }
    while (right > 0) {
        if (vec[r] <= right) {
            right -= vec[r];
            res += 1;
            r -= 1;
        } else break;
    }
    cout << res << "\n";
}
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i ++) solve();
}