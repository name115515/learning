#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int s,v;
    cin >>s>>v;
    int time = 10 + (int)ceil((s * 1.0) / (v * 1.0));
    int depart = 8 * 60 - time;//全转为分钟避免出现60进位的问题
    depart %= 24 * 60;
    if (depart < 0) depart += 24 * 60;
    int h = depart / 60;
    int m = depart % 60;
    cout << setfill('0') << setw(2) << h << ':' << setfill('0') << setw(2) << m << endl;
}