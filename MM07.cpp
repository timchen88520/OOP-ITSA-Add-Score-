#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int main() {
  int n, m;
  while (cin >> n >> m) {
    // while(scanf("%d%d",&n,&m)!=EOF){
    int t = m;
    int ans = 0;
    while (t > 0) {
      if (t % 100 == n) ans++;
      t /= 100;
    }
    t = m / 10;
    while (t > 0) {
      if (t % 100 == n) ans++;
      t /= 100;
    }
    cout << ans << endl;
    // printf("%d\n", ans);
  }
  return 0;
}
