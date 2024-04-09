#include <iostream>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (2 * a <= b) {
        cout << a * n << "\n";
    } else {
        if (n % 2 == 0) {
            cout << b * (n / 2) << "\n";
        } else {
            cout << b * (n / 2) + a << "\n";
        }
    }
}
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i ++) solve();
}