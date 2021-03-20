#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        double ans = 0, x = (double)n;
        for (int i = 1; i <= m; i++) {
            ans += x;
            x = sqrt(x);
        }
        printf("%.2f\n", ans);
    }
    
    return 0;
}

