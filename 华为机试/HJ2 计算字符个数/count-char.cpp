#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    char c;
    int count = 0;
    
    getline(cin, s, '\n');
    cin >> c;
    for (auto i=s.begin(); i<s.end(); i++) {
        if (toupper(c) == toupper(*i)) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}

