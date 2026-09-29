#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, a[1002] = {0}, ans = 0;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 != 0)
        {
            ans += abs(a[i] - a[i] % 3);
            a[i] = a[i] % 3;
        }
    }
    for (int i = 0; i<N;++i)
    {
        cout << a[i];
        if (i!=N-1) cout <<' ';
    }
    cout << endl;
    cout << ans;
}