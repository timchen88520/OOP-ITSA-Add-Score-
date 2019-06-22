#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int main() {
  int l = 0, j;
  int prime[10000];
  prime[l++] = 2;
  for (int i = 3; i <= 30000; i++) {
    for (j = 0; j < l; j++) {
      if (i % prime[j] == 0) break;
    }
    if (j == l) prime[l++] = i;
  }
  // cout << l;
  int n;
  while (cin >> n) {
    // while(scanf("%d",&n)!=EOF){
    if (n == 0) return 0;
    printf("%d\n", lower_bound(prime, prime + 3245, n) - prime);
  }
  return 0;
}
