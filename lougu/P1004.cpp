#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int f[10][10][10][10]={0};
    int x,y,v;
    int m[10][10]={0};
    for (int i=0;;i++) {
      scanf("%d%d%d",&x,&y,&v);
        if (x!=0) {
            m[x][y]=v;
        }
        else {break;}
    }
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            for (int k=1;k<=n;k++)
                for (int l=1;l<=n;l++) {
                    int ma=max(max(f[i-1][j][k-1][l],f[i-1][j][k][l-1]),max(f[i][j-1][k-1][l],f[i][j-1][k][l-1]));
                    if (i==k&&j==l) {
                        f[i][j][k][l]=ma+m[i][j];
                    }
                    else f[i][j][k][l]=ma+m[i][j]+m[k][l];
                }
    printf("%d",f[n][n][n][n]);
    return 0;
}