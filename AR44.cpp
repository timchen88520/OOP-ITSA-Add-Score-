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
  float t;
  // while(scanf("%d%d",&n,&m)!=EOF){
  while (cin >> n >> m) {
    float a[n + 5][m + 5];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
        // scanf("%f",&a[i][j]);
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> t;
        // scanf("%f",&t);
        a[i][j] += t;
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        printf("[%.1f]", a[i][j] / 2);
      }
      printf("\n");
    }
  }
  return 0;
}
