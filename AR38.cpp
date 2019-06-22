#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;
int main() {
  int ncase;
  cin >> ncase;
  // scanf("%d",&ncase);
  while (ncase--) {
    int n, m, k;
    cin >> n >> m >> k;
    // scanf("%d%d%d",&n,&m,&k);
    int a[1005], t;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++) {
      cin >> t;
      // scanf("%d",&t);
      a[t]++;
    }
    int ans = 0;
    for (int i = 1; i <= k / 2; i++) {
      if (i == k - i)
        ans += a[i] / 2;
      else
        ans += min(a[i], a[k - i]);
    }
    cout << ans << endl;
    // printf("%d\n",ans);
  }
  return 0;
}
