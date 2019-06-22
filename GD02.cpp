#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int main() {
  int ncase;
  cin >> ncase;
  // scanf("%d",&ncase);
  while (ncase--) {
    int n, m;
    cin >> n >> m;
    // scanf("%d%d",&n,&m);
    int a[n + 5], b[m + 5];
    for (int i = 0; i < n; i++) cin >> a[i];  // scanf("%d",&a[i]);
    for (int i = 0; i < m; i++) cin >> b[i];  // scanf("%d",&b[i]);
    sort(a, a + n);
    sort(b, b + m);
    int i, j, sum = 0;
    for (i = 0, j = 0; i < n, j < m;) {
      if (i >= n) break;
      if (b[j] >= a[i]) {
        sum += b[j];
        i++, j++;
      } else if (b[j] < a[i]) {
        j++;
      }
    }
    if (i == n)
      cout << sum << endl;  // printf("%d\n", sum);
    else
      cout << "-1" << endl;  // printf("-1\n");
  }
  return 0;
}
