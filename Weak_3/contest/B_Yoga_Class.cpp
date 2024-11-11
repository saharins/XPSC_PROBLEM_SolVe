#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T; // Number of test cases
    
    while (T--) 
    {
        int N, X, Y;
        cin >> N >> X >> Y;

        // Calculate the maximum earnings using as many Type 2 sessions as possible
        int type2Sessions = N / 2;          // Number of 2-hour sessions
        int remainingHours = N % 2;         // Remaining hours for 1-hour sessions
        int maxEarnings = (type2Sessions * Y) + (remainingHours * X);

        cout << maxEarnings << endl;
    }
    
    return 0;
}
