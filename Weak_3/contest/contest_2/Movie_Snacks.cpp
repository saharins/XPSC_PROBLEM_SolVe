#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int cst_separate = 2 * X + 3 * Y;

    int cst_2_cmb = 2 * Z + Y;
    int cst_3_cmb = 3 * Z;
    int m_cst = min({cst_separate, cst_2_cmb, cst_3_cmb});

    cout << m_cst << endl;

    return 0;
}
