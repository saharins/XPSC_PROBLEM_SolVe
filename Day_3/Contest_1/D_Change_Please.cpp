#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int X;
        cin >> X;

        int C = 100 - X;
        int max_Pay = (C / 10) * 10;

        cout << max_Pay << endl;
    }

    return 0;
}
