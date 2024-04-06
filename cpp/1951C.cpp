#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
// dp
// void solve() {
//     int n, m, k; cin >> n >> m >> k;
//     vector<int> vec;
//     for (int i = 0; i < n; i ++) {
//         int num; cin >> num;
//         vec.push_back(num);
//     }
//     // vector<int> prev(k+1, INT_MAX);
//     unordered_map<int, int> prev;
//     prev[0] = 0;
//     // prev[0] = 0;
//     for (int i = 0; i < n; i ++) {
//         // vector<int> cur(k+1, INT_MAX);
//         unordered_map<int, int> cur;
//         for (const auto [first, second] : prev) {
//             for (int t = 0; t <= m; t ++) {
//                 if (cur.find(first+t) == cur.end()) cur[first+t] = INT_MAX;
//                 cur[first+t] = min(prev[first] + (first + vec[i])*t, cur[first+t]);
//             }
//         }
//         // for (int j = 0; j <= k; j ++) {
//         //     for (int t = 0; t <= m; t ++) {
//         //         if (j-t >= 0 && prev.find(j-t) != prev.end())
//         //             cur[j] = min(prev[j-t]+((j-t)+vec[i])*t, cur[j]);
//         //     }
//         // }
//         // for (auto const[first, right] : cur) {
//         //     cout << first << "|" << right << " ";
//         // }
//         // cout << "\n";
//         // for (int j = 0; j <= k ; j ++) {
//         //     cout << cur[j] << " ";
//         // }
//         // cout << "\n";
//         prev = cur;
//         cur.clear();
//     }
//     cout << prev[k] << "\n";
//     prev.clear();
//     // for (int i = 0; i < m*n+1; i ++) {
//     //     res = min(res, dp[k][i]);
//     // }
//     // // cout << res << "\n";
//     // for (int i = 0; i < 4; i ++) {
//     //     for (int j = 0; j < m*n+1; j ++) {
//     //         cout << dp[i][j] << " ";
//     //     }
//     //     cout << "\n";
//     // }

// }

// greedy
void solve2() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> vec;
    for (int i = 0; i < n; i ++) {
        int num; cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());
    long long res = 0, additional = 0;
    for (int i = 0; i < n; i ++) {
        long long buy = min(k, m);
        res += buy * (1LL * vec[i] + additional);
        additional += buy;
        k -= buy;
    }
    cout << res << "\n";
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i ++) solve2();
}