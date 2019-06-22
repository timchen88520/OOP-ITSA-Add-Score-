#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;
int main() {
  int ncase, n = 0;
  int a[55];
  // while(scanf("%d",&a[n++])&&a[n-1]!=-999){
  // }
  while (cin >> a[n++] && a[n - 1] != -999) {
  }
  n--;
  sort(a, a + n);
  for (int i = n - 1; i >= 0; i--) {
    int t = lower_bound(a, a + n, a[i]) - a;
    printf("%d %d\n", a[i], upper_bound(a, a + n, a[i]) - a - t);
    i = t;
  }

  return 0;
}
