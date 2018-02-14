#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    uint A[n], S[n];
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    vector<int> count(n, 0);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (A[i] <= A[j]) ++count[j];
            else ++count[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        S[count[i]] = A[i];
    }
    cout << "S: ";
    for (int i = 0; i < n; ++i) {
        cout << S[i] << " ";
    }
    cout << endl;
    cout << "Count: ";
    for (int i = 0; i < n; ++i) {
        cout << count[i] << " ";
    }
    cout << endl;
    return 0;
}
