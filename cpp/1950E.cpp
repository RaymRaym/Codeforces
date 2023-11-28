#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main() {
    int n;  cin >> n;
    for (int i =0; i < n; i ++) {
        int len; cin >> len;
        string s; cin >> s;
        for (int i = 1; i <= len; i ++) {
            unordered_map<string, int> map;
            if (len % i != 0) continue;
            int total = len / i;
            int j = 0;
            while (j < len) {
                string cur_str = s.substr(j, i);
                map[cur_str] += 1;
                if (map.size() > 2) break; 
                j += i;
            }
            if (map.size() > 2) continue;
            if (map.size() == 1) {
                cout << i << "\n";
                break;
            }
            vector<string> ss;
            vector<int> cc;
            for (const auto [first, second] : map) {
                ss.push_back(first);
                cc.push_back(second);
            }
            if (cc[0] != 1 && cc[1] != 1) continue;
            string s1 = ss[0];
            string s2 = ss[1];
            // cout << s1 << " " << s2 << endl;
            int diff = 0;
            for (j = 0; j < i; j ++) {
                if (s1[j] != s2[j]) diff += 1;
            }
            if (diff <= 1) {
                cout << i << "\n";
                break;
            } 
        }
    }
}