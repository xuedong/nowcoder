#include <iostream>

using namespace std;

long long dp[1001], p[1001], n;
const long long mod = 1e9 + 7;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    
    for (int i = 2; i <= n+1; i++) {
        dp[i] = (2*dp[i-1] - dp[p[i-1]] + 2) % mod; 
    }
    
    cout << (dp[n+1] < 0 ? dp[n+1] + mod : dp[n+1]) << endl;
}

