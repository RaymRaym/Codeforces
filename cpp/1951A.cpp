#include <iostream>
#include <vector>
using namespace std;


void solve() {
    int n; cin >> n;
    vector<char> vec;
    for (int i = 0; i < n; i ++) {
        char num; cin >> num;
        vec.push_back(num);
    }
    int countOfBit = 0;
    for (int i = 0; i < n; i ++) {
        if (vec[i] == '1') countOfBit += 1;
    }
    bool isPair = false;
    for (int i = 0; i < n-1; i ++) {
        if (vec[i] == '1' && vec[i+1] == '1') isPair = true;
    }
    if (countOfBit % 2 == 1) {
        cout << "NO\n";
    } else if (countOfBit == 2 && isPair) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i ++) solve();
}
