#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
int main() {
  int ncase, n = 0;
  int a[105];
  // while(scanf("%d",&a[n++])!=EOF){
  //}
  while (cin >> a[n++]) {
  }
  n--;
  int dp[105];
  memset(dp, 0, sizeof(dp));
  dp[0] = max(a[0], 0);
  int ma = max(dp[0], 0);
  for (int i = 1; i < n; i++) {
    dp[i] = max(a[i] + dp[i - 1], 0);
    ma = max(ma, dp[i]);
  }
  // for(int i=0;i<n;i++) printf("%d ",dp[i]);
  printf("%d\n", ma);

  return 0;
}
