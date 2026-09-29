#include <iostream>
using namespace std;

bool cmp(int a, int b, int c) {
    int cntA = (b > a) + (c == a);
    int cntB = (a > b) + (a > c);
    int cntC = (c > b) + (b > a);

    bool ab = (a < b && cntA > cntB) ||
              (a == b && cntA == cntB) ||
              (a > b && cntA < cntB);

    bool ac = (a < c && cntA > cntC) ||
              (a == c && cntA == cntC) ||
              (a > c && cntA < cntC);

    bool bc = (b < c && cntB > cntC) ||
              (b == c && cntB == cntC) ||
              (b > c && cntB < cntC);

    return ab && ac && bc;
}

int main() {
    for (int a = 1; a <= 3; ++a) {
        for (int b = 1; b <= 3; ++b) {
            for (int c = 1; c <= 3; ++c) {
                if (cmp(a, b, c)) {
                    if (a >= b && a >= c) {
                        cout << "A ";
                        if (b >= c) {
                            cout << "B C";
                        } else {
                            cout << "C B";
                        }
                    }
                    else if (b >= a && b >= c) {
                        cout << "B ";
                        if (a >= c) {
                            cout << "A C";
                        } else {
                            cout << "C A";
                        }
                    }
                    else {
                        cout << "C ";
                        if (a >= b) {
                            cout << "A B";
                        } else {
                            cout << "B A";
                        }
                    }
                }
            }
        }
    }

    return 0;
}