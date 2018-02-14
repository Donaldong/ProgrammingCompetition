#include <iostream>
#include <algorithm>
using namespace std;

inline void scan(uint &number) {
    bool negative = false;
    int c;
    number = 0;
    c = getchar();
    for (; (c>47 && c<58); c=getchar()) number = number *10 + c - 48;
    if (negative) number *= -1;
}

inline void print(uint n) {
    if (n == 0) {
        putchar('0');
        return;
    }
    char buf[11];
    int i = 10;
    while (n) {
        buf[i--] = n % 10 + '0';
        n /= 10;
    }
    while (i < 10) putchar(buf[++i]);
}


int main() {
    ios::sync_with_stdio(false);
    uint n;
    scan(n);
    uint A[n];
    for (int i = 0; i < n; ++i) {
        scan(A[i]);
    }
    sort(&A[0], &A[n]);
    for (int i = 0; i < n; ++i) {
        print(A[i]); putchar('\n');
    }
    return 0;
}
