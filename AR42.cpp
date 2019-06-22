#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

typedef long long lint;
using namespace std;
int main() {
  int n;
  int ma = -105, mi = 105;
  // while(scanf("%d",&n)!=EOF){
  while (cin >> n) {
    ma = max(ma, n);
    mi = min(mi, n);
  }
  cout << "Largest number = " << ma << endl;
  cout << "Smallest number = " << mi << endl;
  // printf("Largest number = %d\n", ma);
  // printf("Smallest number = %d\n", mi);
  return 0;
}
