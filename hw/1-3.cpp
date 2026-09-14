#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
    int a[3]={1,2,-3};
    int b[3]={-3,-5,10};
    int c[3]={2,2,2};

    for (int i=0;i<3;++i){
        int del=b[i]*b[i]-4*a[i]*c[i];
        double x1=(sqrt(del)-b[i])/(2*a[i]);
        double x2=(-sqrt(del)-b[i])/(2*a[i]);
        if(x1>x2){
            double c=x1;
            x1=x2;
            x2=c;
        }
        cout << fixed << setprecision(3) << x1 << " " << x2 <<endl;
    }
    
    return 0;
}