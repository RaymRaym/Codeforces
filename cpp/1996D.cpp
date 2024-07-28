#include <iostream>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    int res = 0;
    for (int a = 1; a <= x; ++a) {
        for (int b = 1; a * b <= n && a + b <= x; ++b) {
            int c = min((n-a*b)/(a+b), x-a-b);
            res += c;
        }
    }
    cout << res << "\n";
}

int main() {
    int nn; cin >> nn;
    for (int i = 0; i < nn; ++i) solve();
}