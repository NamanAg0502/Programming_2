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

vi g[200004];
int vis[100004];

void dfs(int v)
{
     vis[v] = 1;
     for (int child : g[v])
     {
          if (vis[child] == 0)
               dfs(child);
     }
}

int main()
{
     int n, m;
     cin >> n >> m;

     for (int i = 0; i < m; i++)
     {
          int a, b;
          cin >> a >> b;
          g[a].pb(b);
          g[b].pb(a);
     }

     int cnt = 0;
     for (int i = 1; i <= n; i++)
     {
          if (vis[i] == 0)
               dfs(i), cnt++;
     }

     if (cnt == 1 && m == n - 1)
          cout << "YES" << endl;
     else
          cout << "NO" << endl;
     return 0;
}