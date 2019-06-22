#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}
int main() {
  int a, b, c;
  while (cin >> a >> b >> c) {
    // while(scanf("%d%d%d",&a,&b,&c)!=EOF){
    int n = gcd(gcd(a, b), c);
    printf("Common factor in ascending order:");
    for (int i = 2; i < n; i++) {
      if (n % i == 0) {
        cout << i;
        // printf("%d ",i);
      }
    }
    cout << n << endl;
    // printf("%d\n",n);
  }
  return 0;
}
