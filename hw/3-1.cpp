#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int t;

    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (c > d) {
        t = c;
        c = d;
        d = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > d) {
        t = b;
        b = d;
        d = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }

    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;

    return 0;
}