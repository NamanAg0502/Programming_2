#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;
int main()
{
     int n;
     cin >> n;
     int k, s;
     cin >> k >> s;
     vector<int> a(n);
     for (int i = 0; i < n; i++)
     {
          cin >> a[i];
     }

     vector<int> pre(n);
     pre[0] = a[0];
     for (int i = 1; i < n; i++)
     {
          pre[i] = pre[i - 1] + a[i];
     }
     ll ans = 0;

     while (k < n)
     {
          bool temp = false;
          for (int i = k; i < n; i++)
          {
               if (pre[k - 1] <= s)
               {
                    temp = true;
                    ans = k;
                    break;
               }
               if (pre[i] - pre[i - k] <= s)
               {
                    ans = k;
                    temp = true;
                    break;
               }
          }
          if (!temp)
          {
               cout << ans << endl;
               break;
          }
          k += k;
     }
     // cout << ans << endl
     return 0;
}