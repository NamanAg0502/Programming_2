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
          cin >> n;
          int arr[n];
          for (int i = 0; i < n; i++)
          {
               cin >> arr[i];
          }

          int ans = arr[n - 1] - arr[0];
          for (int i = 0; i < n; i++)
          {
               ans = max(ans, arr[(i - 1 + n) % n] - arr[i]);
          }
          for (int i = 1; i < n; i++)
               ans = max(ans, arr[i] - arr[0]);
          for (int i = 0; i < n - 1; i++)
               ans = max(ans, arr[n - 1] - arr[i]);

          pe(ans);
     }
     return 0;
}