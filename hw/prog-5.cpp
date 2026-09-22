#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >>a>>b>>c>>d;
    // 在这里补充代码使最后按先大后小的次序输出
    for (int j=0;j<3;++j){
        if(a<b) swap(a,b);
        if(b<c) swap(b,c);
        if(c<d) swap(c,d);
    }
    
    // <---- 补充代码到此结束
    cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
    return 0;
}