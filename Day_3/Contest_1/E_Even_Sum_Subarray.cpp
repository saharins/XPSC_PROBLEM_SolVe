#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N;
        cin >> N;

        vector<int> A(N);
        int Sum = 0;

        for (int i = 0; i < N; i++) 
        {
            cin >> A[i];
            Sum += A[i];
        }
        if (Sum % 2 == 0) 
        {
            cout << N << endl;
        } 
        else 
        {
            int f_Odd = -1;
            int l_Odd = -1;

            for (int i = 0; i < N; i++) 
            {
                if (A[i] % 2 != 0) 
                {
                    if (f_Odd == -1) f_Odd = i;
                    l_Odd = i;
                }
            }

            if (f_Odd != -1) 
            {
                cout << max(N - f_Odd - 1, l_Odd) << endl;
            } 
            else 
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
