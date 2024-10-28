#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;

    string r = to_string(N);

    while (r.length() < 4)
    {
        r = '0' + r;
    }
    cout << r << endl;
    
    return 0;
}
