#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int A, B, C;
    cin >> A >> B >> C;

    int X = ((A + C - 1) / C) * C;
    
    if (X > B) 
    {
        cout << -1 << endl;
    } 
    else 
    {
        cout << X << endl;
    }
    
    return 0;
}
