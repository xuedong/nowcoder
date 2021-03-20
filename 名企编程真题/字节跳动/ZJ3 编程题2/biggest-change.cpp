#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int n, m;
    cin >> n >> m;
    cin >> s;
    
    int left = 0, right = 0, a = 0, b = 0, ans = 0;
    for (; right < n; right++) {
        if (s[right] == 'a') {
            a++;
        } else {
            b++;
        }
        
        if (a > m && b > m) {
            ans = max(ans, right - left);
            if (s[left] == 'a') {
                a--;
            } else {
                b--;
            }
            left++;
        }
    }
    
    ans = max(ans, right - left);
    cout << ans << endl;
    return 0;
}

