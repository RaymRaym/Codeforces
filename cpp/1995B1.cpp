#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solve(long long n, long long m) {
    vector<long long> vec(n);
    for (long long i = 0; i < n; i ++) cin >> vec[i];
    sort(vec.begin(), vec.end());
    long long res = 0, sum = 0, left = 0, right = 0;
    for (long long right = 0; right < n; right ++) {
        sum += vec[right];
        while (left < n && (sum > m || vec[right] - vec[left] > 1)) {
            sum -= vec[left];
            ++left;
        }
        res = max(res, sum);
    }
    return res;
}

int main() {
    int nn; cin >> nn;
    for (int i = 0; i < nn; i ++) {
        long long n, m;
        cin >> n >> m;
        cout << solve(n, m) << endl;
    }
}