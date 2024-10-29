#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;

    while (T--) 
    {
        int N, X;
        cin >> N >> X;

        vector<int> C;
        for (int i = 1; i <= N; i++) 
        {
            C.push_back(pow(2, i));
        }

        sort(C.rbegin(), C.rend());
        int max_C = 0;

        for (int i = 0; i < N; i++) 
        {
            if (i < X)
            { 
            
                max_C = max_C + C[i];  
            } 
            else 
            {
                max_C = max_C - C[i];
            }
        }

        cout << max_C << endl;
    }

    return 0;
}
