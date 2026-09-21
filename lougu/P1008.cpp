#include <iostream>
using namespace std;

bool check(int a,int b,int c){
    int cnt[10]={0};
    while (a) {
        cnt[a%10]++;
        a/=10;
    }
    while (b) {
        cnt[b%10]++;
        b/=10;
    }
    while (c) {
        cnt[c%10]++;
        c/=10;
    }
    if (cnt[0]!=0) return false;
    for (int i=1;i<=9;++i){
        if (cnt[i]!=1) return false;
    }
    return true;
}
int main(){
    for (int a=123;a<=329;++a){
        if (check(a,2*a,3*a)) {
            cout << a << " " << 2*a << " " << 3*a << endl;
        }
    }
    return 0;
}