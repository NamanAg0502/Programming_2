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

const int MOD = 1e9 + 7;

vi g[100001];
int vis[100001];
int cc_size;

void dfs(int v)
{
     vis[v] = 1;
     cc_size++;
     for (int child : g[v])
     {
          if (vis[child] == 0)
               dfs(child);
     }
}

int main()
{
     w(t)
     {
          int n, m, a, b;
          cin >> n >> m;

          for (int i = 0; i < n; i++)
          {
               g[i].clear(), vis[i] = 0;
          }

          for (int i = 0; i < m; i++)
          {
               cin >> a >> b;
               g[a].pb(b);
               g[b].pb(a);
          }

          int cnt = 0;
          ll ways = 1;

          for (int i = 1; i <= n; i++)
               if (vis[i] == 0)
               {
                    cc_size = 0;
                    dfs(i), cnt++;
                    ways = (ways * cc_size) % MOD;
               }

          cout << cnt << " " << ways << endl;
     }
     return 0;
}