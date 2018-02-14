#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int r = i + 3;
        for (int j = 0; j < n; ++j) {
            if (j) cout << "\t";
            char c = 'B' + j;
            cout << "=COUNTIFS(Edge!A4:A,A" << r << ",Edge!B4:B," << c << "2)";
        }
        cout << endl;
    }
    return 0;
}
