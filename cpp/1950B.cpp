#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int width;
        cin >> width;
        bool isPound = true;
        for (int j = 0; j < 2*width; j+=2) {
            int k = 0;
            bool curPound = isPound;
            while (k < 2*width) {
                if (curPound) {
                    cout << "##";
                    k += 2;
                } else {
                    cout << "..";
                    k += 2;
                }
                curPound = !curPound;
            }
            cout << "\n";
            k = 0;
            curPound = isPound;
            while (k < 2*width) {
                if (curPound) {
                    cout << "##";
                    k += 2;
                } else {
                    cout << "..";
                    k += 2;
                }
                curPound = !curPound;
            }
            cout << "\n";
            isPound = !isPound;
        }
    }
}