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
          int n;
          string s;
          cin >> n >> s;
          int k = 0, lf = 1, rt = 1;
          vi l(n, 0), r(n, 0), str(n, 0);
          for (int i = 0; i < n; i++)
          {
               if (s[i] == 'L')
               {
                    str[i] = i;
                    l[i] = n - i - 1;
               }
               else
               {
                    str[i] = n - i - 1;
                    r[i] = i;
               }
          }

          int sum = accumulate(str.begin(), str.end(), 0);

          for (int i : l)
               cout << i << ' ';

          ce;

          cout << sum << " ";

          ce;
     }
     return 0;
}