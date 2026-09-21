#include <cstdio>
#include <algorithm>
using namespace std;

void out(__int128 x){ if(x>9) out(x/10); putchar('0'+(int)(x%10)); }

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[85][85];
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    
    __int128 ans=0;
    __int128 pow[85];
    pow[0]=1;
    for (int l=0;l<=m;l++){
        pow[l+1]=2*pow[l];
    }
    for (int k=0;k<n;k++){
            __int128 dp[85][85];
    for (int x=m-1; x>=0; x--){
            dp[x][x]=a[k][x]*pow[m];
            for (int y=x+1;y<m;y++){
                dp[x][y]=max(dp[x+1][y]+a[k][x]*pow[m+x-y],dp[x][y-1]+a[k][y]*pow[m+x-y]);
            }
        }
        ans=ans+dp[0][m-1];
    }
    out(ans);
    return 0;
}