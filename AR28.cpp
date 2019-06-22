#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;
int main() {
  int n;
  // while(scanf("%d",&n)!=EOF){
  while (cin >> n) {
    int a[n + 5];
    for (int i = 0; i < n; i++) cin >> a[i];  // scanf("%d", &a[i]);
    int ans = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (a[i] > 2 * a[j]) ans++;
      }
    }
    cout << ans << endl;
    // printf("%d\n", ans);
  }

  return 0;
}
