#include <set>
#include <iostream>
using namespace std;

int main(){
    multiset<int> set;
    set.insert(1);
    set.insert(1);
    set.insert(0);
    set.insert(-1);
    cout << set.count(1) << endl;
    // cout << set.find(1)<<endl;
    set.erase(set.find(1));
    cout << set.count(1) << endl;
    cout << 1 << endl;
    cout << *set.rbegin() << endl;
}