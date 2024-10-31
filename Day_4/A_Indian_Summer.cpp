#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<pair<string, string>> unq_lev;

    for (int i = 0; i < n; ++i) 
    {
        string species, color;
        cin >> species >> color;
        unq_lev.insert({species, color});
    }

    cout << unq_lev.size() << endl;
    return 0;
}
