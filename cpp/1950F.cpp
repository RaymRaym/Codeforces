#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <queue>

using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i ++) {
        int two, one, zero;
        cin >> two >> one >> zero;
        queue<int> q;
        if (two > 0) {
            q.push(2);  two -= 1;
        } else if (one > 0) {
            q.push(1); one -= 1;
        } else if (zero > 0) {
            q.push(0); zero-= 1;
        }
        int level = 0;
        bool isValid = true;
        while (!q.empty()) {
            int sz = q.size(); 
            // cout << "level" << level << ":";
            for (int p = 0; p < sz; p ++) {
                int cur = q.front(); q.pop();
                // cout << cur << " ";
                if (cur == 0) continue;
                while (cur > 0) {
                    if (two > 0) {
                        two -= 1;
                        cur -= 1;
                        q.push(2);
                    } else if (one > 0) {
                        one -= 1;
                        cur -= 1;
                        q.push(1);
                    } else if (zero > 0){
                        zero -= 1;
                        cur -= 1;
                        q.push(0);
                    } else break;
                }
                if (cur > 0) {
                    isValid = false; break;
                }
            }
            if (isValid == false) break;
            else if(q.empty()) break;
            else {
                level += 1;
                // cout << endl;
            }
        }
        if (isValid == false || two > 0 || one > 0 || zero > 0)  cout << -1 << "\n";
        else cout << level << "\n";
    }
}