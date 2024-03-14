#include <bits/stdc++.h>
using namespace std;
void Pascal (int n)
{
    int res[n];
    for (int i = 0; i < n ;i++) res[i] = 1;
    for (int i = 1; i < n - 1; i++) {
        for (int j = i; j > 0; j--) {
            res[j] += res[j - 1];
        }
    }
    for (int i = 0; i < n; i ++) cout << setw(3) << res[i] << " ";
    cout << endl;
}
int main()
{
    int n ; cin >> n;
    for (int i = 1; i <= n ; i++) {
        Pascal(i);
    }
}
