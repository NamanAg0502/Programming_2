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

     int n, D;
     cin >> n >> D;
     int arr[n];
     for (int i = 0; i < n; i++)
          cin >> arr[i];

     sort(arr, arr + n);
     int cnt = 0;
     int s = 0, e = n - 1;
     while (s < e)
     {
          int x = 0;
          if (D % arr[e])
               x = D / arr[e];
          else
               x = D / arr[e] + 1;

          if ((e - s) > x)
          {
               while (x--)
                    s++;
               cnt++;
          }
          else
               break;
          e--;
     }
     pe(cnt);
     return 0;
}