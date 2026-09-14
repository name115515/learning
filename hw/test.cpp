#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a=sin(20.0/180*3.14159) * cos(20.0/180*3.14159) -cos(10.0/180*3.14159)/tan(10.0/180*3.14159);
    cout << a << endl;
    return 0;
}