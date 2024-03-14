#include <bits/stdc++.h>

using namespace std;
const int N = 1e3 + 1;

int a[N][N], b[N][N];

int main()
{
    int m, n;
    cin >> m >> n;
    int x1, x2, y1, y2;
    x1 = 1, x2 = m;
    y1 = 1, y2 = n;
    int cnt = 1;
    while(x1 < x2)
    {
        for(int i = y1; i <= y2; i++)
        {
            a[x1][i] = cnt;
            cnt++;
        }
        x1++;

        for(int i = x1; i <= x2; i++)
        {
            a[i][y2] = cnt;
            cnt++;
        }
        y2--;

        for(int i = y2; i >= y1; i--)
        {
            a[x2][i] = cnt;
            cnt++;
        }
        x2--;

        for(int i = x2; i >= x1; i--)
        {
            a[i][y1] = cnt;
            cnt++;
        }
        y1++;
    }

    for(int i = 1; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << setw(3) << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
