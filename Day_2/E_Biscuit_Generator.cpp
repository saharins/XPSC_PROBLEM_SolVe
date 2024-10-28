#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int A, B, T;
    cin >> A >> B >> T;

    int count = (T + 0.5) / A;
    int t_biscts = count * B;
    
    cout << t_biscts << endl;
    
    return 0;
}
