#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int m, n;
    int a[52][52] = {};
    scanf("%d%d", &m, &n);

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            scanf("%d", &a[i][j]);

    int dp[102][52][52]={0};
    for (int k=1;k<=m+n-2;++k)
        for (int x1=1;x1<=k&&x1<=m;++x1)
            for (int x2=1;x2<=k&&x2<=m;++x2){
                if (x1==x2&&x1!=m&&x2!=m){
                    continue;
                }
                else {
                    int y1=k+2-x1,y2=k+2-x2;
                    
                    dp[k][x1][x2]=max(max(dp[k-1][x1-1][x2],dp[k-1][x1-1][x2-1]),max(dp[k-1][x1][x2],dp[k-1][x1][x2-1]))+a[x1][y1]+a[x2][y2];

                }
            }
    printf("%d",dp[m+n-2][m][m]);
    return 0;
}
