#include <iostream>
#include <iomanip>
using namespace std;

double s(double R,double r,double h){
    double pi=3.141592653589793;
    double result=2*pi*h*(R+r);
    return result;
}
double v(double R,double r,double h){
    double pi=3.141592653589793;
    double result=pi*h*(R*R-r*r);
    return result;
}

int main(){
    double R[3]={5.0,3.5,0.1};
    double r[3]={2.0,2.5,0.001};
    double h[3]={10.0,5.5,11.1};
    for (int i=0;i<3;++i){
        cout<<fixed<<setprecision(5)<<s(R[i],r[i],h[i])<<" "<<v(R[i],r[i],h[i])<<endl;
    }
    return 0;
}
