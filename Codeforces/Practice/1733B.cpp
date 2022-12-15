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

int main()
{
     w(t)
     {
          int x, y, n;
          cin >> n >> x >> y;
          if (x > y)
               swap(x, y);
          if (x || !y || (n - 1) % y)
          {
               cout << -1 << endl;
               continue;
          }
          for (int k = 2; k <= n; k += y)
          {
               for (int i = 1; i <= y; i++)
                    cout << k << ' ';
          }
          cout << endl;
     }
     return 0;
}