#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, W;
    cin >> n >> W;
    double V = 0;
    vector<pair<double, pair<int, int> > > a(n);
    for (int i = 0; i < n; ++i)
    {
        int v, w;
        cin >> v >> w;
        a[i]=make_pair((v * 1.0 / w), make_pair(v,w));
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n; ++i)
    {
        if (W == 0) break;
        if (W > a[i].second.second)
        {
            W -= a[i].second.second;
            V += a[i].second.first;
        }
        else
        {
            V += W * a[i].first;
            W = 0;
        }
    }
    cout << setprecision(4) << fixed <<V<<endl;
    return 0;
}
