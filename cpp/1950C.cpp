#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        string s;
        cin >> s;
        string hh = s.substr(0, 2);
        string mm = s.substr(3, 2);
        int hhi = stoi(hh);
        string AMPM;
        if (hhi == 0) {
            hh = "12";
            AMPM = "AM";
        } else if (hhi < 12) {
            AMPM = "AM";
        } else if (hhi == 12){
            AMPM = "PM";
        } else {
            hhi -= 12;
            if (hhi < 10) {
                hh = "0" + to_string(hhi);
            } else {
                hh = to_string(hhi);
            }
            AMPM = "PM";
        }
        cout << hh << ":" << mm << " " << AMPM << "\n";
    }
}