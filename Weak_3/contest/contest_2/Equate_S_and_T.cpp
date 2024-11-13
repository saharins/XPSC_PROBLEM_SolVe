#include <iostream>
#include <string>
using namespace std;

// Function to solve each test case
string canBeMadeEqual(int N, int M, const string& S, const string& T) {
    int countA_S = 0, countB_S = 0;
    int countA_T = 0, countB_T = 0;
    
    // Count 'a' and 'b' in string S
    for (char ch : S) {
        if (ch == 'a') countA_S++;
        else countB_S++;
    }
    
    // Count 'a' and 'b' in string T
    for (char ch : T) {
        if (ch == 'a') countA_T++;
        else countB_T++;
    }
    
    // Case 1: If both S and T have only 'b' characters
    if (countA_S == 0 && countA_T == 0) {
        return (N == M) ? "Yes" : "No";
    }
    
    // Case 2: If one string has no 'a's but the other does
    if ((countA_S == 0 && countA_T > 0) || (countA_S > 0 && countA_T == 0)) {
        return "No";
    }
    
    // Case 3: Both strings have at least one 'a'
    return "Yes";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        string S, T;
        cin >> N >> M >> S >> T;
        cout << canBeMadeEqual(N, M, S, T) << endl;
    }
    return 0;
}
