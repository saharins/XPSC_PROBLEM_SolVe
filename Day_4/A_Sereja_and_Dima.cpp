#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);        

    int n;
    cin >> n;
    vector<int> C(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> C[i];
    }

    int left = 0;
    int right = n - 1;
    int S_scr = 0;
    int D_scr = 0;
    bool S_trn = true;

    while (left <= right) 
    {
        int C_crd;

        if (C[left] > C[right]) 
        {
            C_crd = C[left];
            left++;
        } 
        else 
        {
            C_crd = C[right];
            right--;
        }
        if (S_trn) 
        {
            S_scr += C_crd;
        } 
        else 
        {
            D_scr += C_crd;
        }
        S_trn = !S_trn; 
    }

    cout << S_scr << " " << D_scr << endl;

    return 0;
}
