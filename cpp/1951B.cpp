#include <iostream>
#include <vector>
using namespace std;


void solve() {
    int n, idx; 
    cin >> n >> idx;
    vector<int> vec;
    for (int i = 0; i < n; i ++) {
        int num; cin >> num;
        vec.push_back(num);
    }
    int my = vec[idx-1];
    // change with the larger one
    int firstLargerIdx = 0;
    for (int i = 0; i < idx; i ++) {
        if (vec[i] > my) {
            firstLargerIdx = i;
            break;
        }
    }
    swap(vec[firstLargerIdx], vec[idx-1]);
    int count = 0, i = 2;
    int winner = max(vec[0], vec[1]);
    if (winner == my) count += 1;
    while (i < n) {
        winner = max(winner, vec[i]);
        if (winner == my) count += 1;
        i += 1;
    }
    int res = count;
    // cout << res << "\n";
    swap(vec[firstLargerIdx], vec[idx-1]);
    swap(vec[0], vec[idx-1]);
    count = 0; i = 2;
    winner = max(vec[0], vec[1]);
    if (winner == my) count += 1;
    while (i < n) {
        winner = max(winner, vec[i]);
        if (winner == my) count += 1;
        i += 1;
    }
    // cout << count << "\n";
    cout << max(res, count) << "\n";
    

    // int res = idx - 1 - firstLargerIdx;
    // // cout << firstLargerIdx << " " << res << "\n";
    // // change to the first one
    // for (int i = 1; i < n; i ++) {
    //     if (vec[i] < my) {
    //         count += 1;
    //     } else if (vec[i] > my) {
    //         break;
    //     }
    // }
    // if (min(vec[0], vec[1]) == my) {
    //     cout << 0 << "\n";
    // } else {
    //     // cout << count << "\n" << endl;
    //     cout << max(res, count) << "\n";
    // }
    
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i ++) solve();
}
