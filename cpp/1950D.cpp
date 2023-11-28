#include <iostream>
#include <queue>
#include <unordered_set>
using namespace std;
int main() {
    // get all the binary decimals up to 6 digits
    int num = 1;
    queue<int> q;
    q.push(num);
    unordered_set<int> set;
    while (q.size() > 0) {
        int cur = q.front(); q.pop();
        if (cur > 50000) break;
        set.insert(cur);
        q.push(cur*10);
        q.push(cur*10+1);
    }
    set.erase(1);
    // for (const auto &i : set) {
    //     cout << i << " ";
    // }
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i ++) {
        cin >> num;
        if (num == 1 || set.find(num) != set.end()){
            cout << "YES\n";
            continue;
        }
        for (const auto &j : set) {
            while (num % j == 0) {
                num /= j;
            }
        }
        if (set.find(num) != set.end() || num == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
    }
    
}