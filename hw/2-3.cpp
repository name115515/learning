#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a[10],ans=0,n=0;
    for (int i=0;i<6;++i){
        cin>>a[i];
        if (a[i]%2!=0&&a[i]%3==0){
            ans+=a[i];
            n++;
        }

    }
    if (n==0)
        cout<<"0.0000";
    else
        cout<<fixed<<setprecision(4)<<ans*1.0/n<<endl;
    return 0;
}