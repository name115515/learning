#include <iostream>
#include <vector>
using namespace std;

// 大整数乘以普通整数，低位在前存储
void mul(vector<int>& a, int b) {
    int carry = 0;
    for (int& d : a) {
        int t = d * b + carry;
        d = t % 10;
        carry = t / 10;
    }
    while (carry) {
        a.push_back(carry % 10);
        carry /= 10;
    }
}

// 大整数加法，低位在前存储，结果累加到 a
void addTo(vector<int>& a, const vector<int>& b) {
    int carry = 0;
    for (int i = 0; i < (int)b.size() || carry; i++) {
        if (i >= (int)a.size()) a.push_back(0);
        int t = a[i] + (i < (int)b.size() ? b[i] : 0) + carry;
        a[i] = t % 10;
        carry = t / 10;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> fac(1, 1);  // 当前阶乘，从 1! 开始
    vector<int> sum(1, 0);  // 累加和
    for (int i = 1; i <= n; i++) {
        mul(fac, i);
        addTo(sum, fac);
    }
    for (int i = (int)sum.size() - 1; i >= 0; i--) {
        cout << sum[i];
    }
    cout << endl;
    return 0;
}