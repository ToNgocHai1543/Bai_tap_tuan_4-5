#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size();
    int l = 0;
    int r = n  - 1;
    int k = 0;
    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
            k++;
        }
        else break;
    }
    if (k >= (n - 1) /2) cout << "Yes";
    else cout << "No";
}
