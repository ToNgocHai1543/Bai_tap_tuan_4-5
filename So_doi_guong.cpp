#include <bits/stdc++.h>
using namespace std;
bool sodoiguong(int x) {
    int n = x;
    int so = 0;
    while (n > 0) {
        so = so * 10 + n % 10;
        n = n / 10;
    }
    if (so == x) return true;
    else return false;
    return true;
}
int main () {
    int T;
    cin >> T;
    while (T > 0) {
        int a, b; cin >> a >> b;
        int sl = 0;
        for (int i = a; i <= b; i++) {
            if (sodoiguong(i)) sl++;
        }
        cout << sl << endl;
        T--;
    }
}

