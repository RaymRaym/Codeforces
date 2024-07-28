#include <iostream>

using namespace std;
void solve() {
    int n; cin >> n;
    int res = (n % 4 ==0)? (n/4) :( n/4+1);
    cout << res << "\n";


}

int main() {
    int nn; cin >> nn;
    for (int i = 0; i < nn; i ++) {
        solve();
    }
}