#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 120; i++)
    {

        cout <<setw(3) << setfill('0')<< i << ' ';
        if ((i + 1) % 20 == 0)
            cout << '\n';
    }
    return 0;
}