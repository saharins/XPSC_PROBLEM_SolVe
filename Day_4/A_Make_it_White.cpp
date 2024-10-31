#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int first = -1;
        int last = -1;

        for (int i = 0; i < n; ++i) 
        {
            if (s[i] == 'B') 
            {
                if (first == -1) 
                {
                    first = i;
                }
                last = i;
            }
        }
        int length = last - first + 1;
        cout << length << endl;
    }

    return 0;
}
