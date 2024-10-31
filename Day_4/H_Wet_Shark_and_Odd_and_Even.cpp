#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    long long sum = 0;
    int Odd = 1e9 + 1; 

    for (int i = 0; i < n; ++i) 
    {
        int x;
        cin >> x;
        sum += x;

        if (x % 2 != 0) 
        {
            Odd = min(Odd, x);
        }
    }

    if (sum % 2 != 0) 
    {
        sum = sum - Odd;
    }

    cout << sum << endl;
    return 0;
}
