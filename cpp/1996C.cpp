#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    string s1, s2; cin >> s1 >> s2;
    vector<vector<int>> vec1(n+1, vector<int>(26, 0));
    vector<vector<int>> vec2(n+1, vector<int>(26, 0));
    for (int i = 1; i <= n; ++i) {
        int cur_char1 = s1[i-1]-'a';
        int cur_char2 = s2[i-1]-'a';
        for (int j = 0; j < 26; ++j) {
            if (j == cur_char1) vec1[i][j] = vec1[i-1][j] + 1;
            else vec1[i][j] = vec1[i-1][j];
            if (j == cur_char2) vec2[i][j] = vec2[i-1][j] + 1;
            else vec2[i][j] = vec2[i-1][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        int l, r; cin >> l >> r;
        int res = 0;
        
        for (int j= 0; j < 26; ++j) {
            int diff1 = vec1[r][j] - vec1[l-1][j];
            int diff2 = vec2[r][j] - vec2[l-1][j];
            res += max(0, diff1-diff2);
        }
        
        cout << res << "\n";
    }
}

int main() {
    int nn; cin >> nn;
    for (int i = 0; i < nn; ++i) solve();
}