#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int m,t,s;
    cin >>m>>t>>s;
    if(t == 0) cout << 0;
    else cout << max(0, m - (s+t-1)/t); //(s+t-1)/t可实现s/t向上取整
    
    return 0;
}