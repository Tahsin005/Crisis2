#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
     int tt;
     cin >> tt;
     while (tt--) {
          int n;
          cin >> n;
          map<int, vector<int>> m;
          for (int i = 0; i < n; i++) {
               int x;
               cin >> x;
               if (m[x].size() > 1) {
                    continue;
               }
               m[x].push_back(i + 1);
          }
          for (auto &x : m) {
               if (x.second.size() == 1) {
                    cout << x.second[0] << endl;
                    break;
               }
          }
     }
     return 0;
}