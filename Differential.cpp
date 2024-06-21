// 二维差分 网易互娱笔试

#include <bits/stdc++.h>
using namespace std;
const int N = 100010;
int n, q;
int b[5000][5000];
struct Dian
{
    int x, y, r;
} dian[N];
void add(int x1, int y1, int x2, int y2, int c)
{
    b[x1][y1] += c;
    b[x1][y2 + 1] -= c;
    b[x2 + 1][y1] -= c;
    b[x2 + 1][y2 + 1] += c;
}
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x, y, r;
        cin >> x >> y >> r;
        x += 2000, y += 2000;
        dian[i] = {x, y, r};
        add(x - r, y - r, x + r, y + r, 1);
    }
    for (int i = 1; i <= 5000; i++)
    {
        for (int j = 1; j <= 5000; j++)
        {
            b[i][j] = b[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
        }
    }
    cin >> q;
    while (q--)
    {
        int x0, y0;
        cin >> x0 >> y0;
        x0 += 2000, y0 += 2000;
        cout << b[x0][y0] << endl;
    }
    return 0;
}