#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r , c; cin >> r >> c;
    int a[r][c]; memset(a, 0 , sizeof a);
    int cnt = 0;
    int r1 = 0, r2 = r , c1 = 0, c2 = c;
    while (cnt < r * c) {
        for (int i = c1; i < c2; i++){
            cnt++;
            a[r1][i] = cnt;
        }
        r1++;
        for (int i = r1; i < r2; i++) {
            cnt++;
            a[i][c2 - 1] = cnt;
        }
        c2--;
        for (int i = c2 - 1; i >= c1; i--) {
            cnt++;
            a[r2 - 1][i]  = cnt;
        }
        r2--;
        for (int i = r2 - 1; i >= r1; i--) {
            cnt++;
            a[i][c1] = cnt;
        }
        c1++;
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << setw(3) << a[i][j] << " ";
        }
        cout << endl;
    }
}
