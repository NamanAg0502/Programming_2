#include "bits/stdc++.h"
using namespace std;

#define vi vector<int>
#define ll long long
#define ull unsigned long long
#define vb vector<bool>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define pb push_back
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define pf(a)              \
     for (auto &(i) : (a)) \
          cout << i << ' ';
#define p(a) cout << a << ' '
#define pe(a) cout << a << endl;
#define w(x)   \
     int x;    \
     cin >> x; \
     while (x--)
#define ce cout << endl;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define setbits(x) __builtin_popcount(x)

vi g[2001];
int vis[2001], col[2001];

bool dfs(int v, int cl)
{
     vis[v] = 1;
     col[v] = cl;
     for (int child : g[v])
     {
          if (vis[child] == 0)
          {
               bool res = dfs(child, cl ^ 1);
               if (res == false)
                    return false;
          }
          if (col[child] == col[v])
               return false;
     }
     return true;
}

int main()
{
     int t, n, m;
     cin >> t;

     for (int tc = 1; tc <= t; tc++)
     {
          cin >> n >> m;

          for (int i = 1; i <= n; i++)
               g[i].clear(), vis[i] = 0;

          for (int i = 0; i < m; i++)
          {
               int a, b;
               cin >> a >> b;
               g[a].pb(b);
               g[b].pb(a);
          }

          bool ans = true;

          for (int i = 1; i <= n; i++)
          {
               if (vis[i] == 0)
               {
                    bool res = dfs(i, 0);
                    if (res == false)
                         ans = false;
               }
          }

          cout << "Scenario #" << tc << ":" << endl;

          if (ans == false)
               cout << "Suspicious bugs found!" << endl;
          else
               cout << "No suspicious bugs found!" << endl;
     }

     return 0;
}