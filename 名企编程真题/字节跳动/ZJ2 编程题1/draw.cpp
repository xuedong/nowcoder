#include <iostream>

using namespace std;

int main() {
    long long t, n, k, d1, d2, a, b, c; 
    
    cin >> t;
    while (t--) {
        cin >> n >> k >> d1 >> d2;
        
        if (n % 3 != 0) {
            cout << "no" << endl;
            continue;
        }
        
        int flag = 0;
        for (int sign1 = -1; sign1 <= 1; sign1 += 2) {
            for (int sign2 = -1; sign2 <= 1; sign2 += 2) {
                long long ad1 = d1 * sign1;
                long long ad2 = d2 * sign2;
                b = (k + ad1 + ad2) / 3;
                a = (k - 2*ad1 + ad2) / 3;
                c = (k + ad1 - 2*ad2) / 3;
                
                if (a+b+c !=k || a < 0 || b < 0 || c < 0) {
                    continue;
                }
                if (a > n/3 || b > n/3 || c > n/3) {
                    continue;
                }
                
                cout << "yes" << endl;
                flag = 1;
                break;
            }
            if (flag) {
                break;
            }
        }
        if (not(flag)) {
            cout << "no" << endl;
        }
    }
    
    return 0;
}

