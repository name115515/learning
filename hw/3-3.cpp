#include <iostream>
using namespace std;

bool t(bool a, bool b, bool c, bool d, bool e, bool f) {
    bool cca = (a == 0);
    bool ccb = (a != c);//应使用异或
    bool ccc = (!cca && !ccb);
    bool ccf = (f == 1);
    bool ccd = (!ccc && !ccf);
    bool cce = (cca && ccd && !ccb &&
                !ccc && !ccf); 

    return cca + ccb + ccc + ccd + cce + ccf == 3;
}

int main() {
    bool a, b, c, d, e, f;
    char name[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    for (int i = 0; i < 6; i++) {
        a = b = c = d = e = f = false;

        if (i == 0) a = true;
        if (i == 1) b = true;
        if (i == 2) c = true;
        if (i == 3) d = true;
        if (i == 4) e = true;
        if (i == 5) f = true;

        if (t(a, b, c, d, e, f)) {
            cout << name[i] << endl;
        }
    }

    return 0;
}