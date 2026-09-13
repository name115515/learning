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
        for (int x1=1;x1<=k+1&&x1<=m;++x1)//注意初始和结束值是否需要加1
            for (int x2=1;x2<=k+1&&x2<=m;++x2){
                if (x1==x2&&k!=m+n-2){//判断条件错误（写成x!=m）导致部分数据存在问题
                    continue;
                }
                else {
                    int y1=k+2-x1,y2=k+2-x2;
                    if (y1>n||y2>n){
                        continue;//注意范围判断
                    }
                    
                    dp[k][x1][x2]=max(max(dp[k-1][x1-1][x2],dp[k-1][x1-1][x2-1]),max(dp[k-1][x1][x2],dp[k-1][x1][x2-1]))+a[x1][y1]+a[x2][y2];

                }
            }
    printf("%d",dp[m+n-2][m][m]);
    return 0;
}
