#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 1;
int a[N] , n;
map < int, int > mp;
int main() {
    cin >>n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int k = 0;
    for (auto it : mp) {
        if (it.second >= 2) {
            k++;
        }
    }
    if (k > 0) cout << "Yes";
    else cout << "No";
}
