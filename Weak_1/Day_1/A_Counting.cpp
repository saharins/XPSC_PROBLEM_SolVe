#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int A, B;
    cin >> A >> B; 

    //cout << "A: " << A << ", B: " << B << endl;

    if (A > B) 
    {
        cout << 0 << endl; 
    } 
    else 
    {
        cout << B - A + 1 << endl;
    }

    return 0;
}
