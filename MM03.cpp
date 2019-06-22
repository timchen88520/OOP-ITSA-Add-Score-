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
  // scanf("%d",&ncase);
  cin >> ncase;
  while (ncase--) {
    int n, d;
    int a, b;
    int p[1005];
    memset(p, -1, sizeof(p));
    cin >> n >> d;
    // scanf("%d%d", &n, &d);
    int i = 0;
    while (1) {
      if (p[n * 10 / d] != -1) {
        a = i - p[n * 10 / d];
        if (n * 10 / d == 0) a--;
        break;
      }
      p[n * 10 / d] = i++;
      n = n * 10 % d;
    }

    memset(p, -1, sizeof(p));
    cin >> n >> d;
    // scanf("%d%d", &n, &d);
    i = 0;
    while (1) {
      if (p[n * 10 / d] != -1) {
        b = i - p[n * 10 / d];
        if (n * 10 / d == 0) b--;
        break;
      }
      p[n * 10 / d] = i++;
      n = n * 10 % d;
    }
    // cout << a << " " << b << "\n";
    if (a > b)
      cout << "A" << endl;  // printf("A\n");
    else if (b > a)
      cout << "B" << endl;  // printf("B\n");
    else
      cout << "T" << endl;  // printf("T\n");
  }
  return 0;
}
