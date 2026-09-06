#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int a[52][52]={0};
    int m,n;
    scanf("%d%d",&m,&n);
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    long long dp[52][52]={0};
        for (int k=0;k<m;k++)
        for (int l=0;l<n;l++)
            dp[k][l]=max(dp[k-1][l],dp[k][l-1])+a[k][l];
    printf("%lld",dp[m-1][n-1]*2);
    return 0;
    
}