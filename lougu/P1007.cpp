#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int L,N;
    cin >>L>>N;
    int x[5005],maxt=0,mint=0;
    for (int i=1;i<=N;++i){
        cin>>x[i];
        maxt=max(max(x[i],L+1-x[i]),maxt);
        mint=max(min(x[i],L+1-x[i]),mint);
    }
    cout<<mint<<' '<<maxt<<endl;
}