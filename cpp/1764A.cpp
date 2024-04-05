#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n; cin >> n;
    for (; n > 0; n --) {
        unordered_set<int> s;
        int m; cin >> m;
        for (int i = 0; i < m; i ++) {
            int x; cin >> x;
            s.insert(x);
        }
        cout << 1 << " " << m << endl;
    }
    
}