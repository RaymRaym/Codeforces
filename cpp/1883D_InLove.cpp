
#include <set>
#include <iostream>
 
int main() {
    std::multiset<int> left;
    std::multiset<int> right;
 
    int q;
    std::cin >> q;
    for (int i = 0; i < q; ++i) {
        char op;
        int l, r;
        std::cin >> op >> l >> r;
        if (op == '+') {
            left.insert(l);
            right.insert(r);
        } else {
            left.erase(left.find(l));
            right.erase(right.find(r));
        }
        if (left.empty()) {
            std::cout << "no" << '\n';
        } else {
            bool cross = *right.begin() >= *left.rbegin();
            std::cout << (cross ? "no" : "yes") << '\n';
        }
    }
}