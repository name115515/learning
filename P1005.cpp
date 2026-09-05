#include <cstdio>
#include <algorithm>
using namespace std;

void write(__int128 x) {
    if (x == 0) {
        putchar('0');
        return;
    }
    char s[50];
    int t = 0;
    while (x > 0) {
        s[t++] = char('0' + int(x % 10));
        x /= 10;
    }
    while (t) putchar(s[--t]);
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[85][85];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    __int128 pow2[85] = {1};
    for (int i = 1; i <= m; ++i) pow2[i] = pow2[i - 1] * 2;

    __int128 ans = 0;
    for (int i = 0; i < n; ++i) {
        __int128 dp[85][85] = {0};
        for (int j = 0; j < m; ++j) dp[j][j] = a[i][j] * pow2[m];
        for (int len = 2; len <= m; ++len) {
            for (int l = 0; l + len - 1 < m; ++l) {
                int r = l + len - 1;
                __int128 w = pow2[m - len + 1];
                dp[l][r] = max(dp[l + 1][r] + 1LL * a[i][l] * w,
                               dp[l][r - 1] + 1LL * a[i][r] * w);
            }
        }

        ans += dp[0][m - 1];
    }

    write(ans);
    putchar('\n');
    return 0;
}