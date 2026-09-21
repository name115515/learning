#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    const double Pi=3.14;
    double h,r;
    cin >>h>>r;
    double v=h*Pi*r*r;
    int n=ceil(20000/v);
    cout <<n<<endl;
}