#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int A, B;
    cin >> A >> B;
    
    int op1 = 2 * A - 1; 
    int op2 = 2 * B - 1; 
    int op3 = A + B;  
    
    int max_Coin = max({op1, op2, op3});
    
    cout << max_Coin << endl;
    
    return 0;
}
