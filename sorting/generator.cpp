#include <iostream>
#include <string>
#include <random>
using namespace std;

#define putchar putchar_unlocked

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

int main(int argc, char **argv) {
    int size = stoi(string(argv[1]));
    string type = string(argv[2]);
    print(size); putchar('\n');
    if (type == "1") {
        for (int i = 0; i < size; ++i) {
            print(i); putchar('\n');
        }
    } else if (type == "2") {
        for (int i = size - 1; i >= 0; --i) {
            print(i); putchar('\n');
        }
    } else {
        random_device rd;
        mt19937 gen(rd());
        for (int i = 0; i < size; ++i) {
            print(gen()); putchar('\n');
        }
    }
    return 0;
}
