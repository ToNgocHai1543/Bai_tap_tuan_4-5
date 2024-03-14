#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int cnt = 1;
    int a[n][n]; memset(a , 0, sizeof a);
    int r = 0, c = n / 2;
    a[r][c] = cnt;
    while (cnt < n * n) {
        if (r == 0 and c == n - 1) {
            r++; cnt ++;
            a[r][c] = cnt;
        }
        else if (r == 0) {
                r = n;
            while (c < n - 1) {
                    if (a[r - 1][c + 1] == 0) {
                        r--; c++;cnt++;
                        a[r][c] = cnt;
                    }
                    else {
                        r++; cnt++; a[r][c] = cnt;
                    }
            }
        }
        else if (c == n - 1) {
            c = 0; r--; cnt++; a[r][c] = cnt;
            while (r > 0) {
                if (a[r - 1][c + 1] == 0) {
                    r--; c++; cnt++; a[r][c] = cnt;
                }
                else {
                    r++; cnt++; a[r][c] = cnt;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
}
