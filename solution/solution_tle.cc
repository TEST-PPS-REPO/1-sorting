#include <algorithm>
#include <cstdio>
int ar[101010];
int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) scanf("%d", ar + i);
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (ar[i] > ar[j]) std::swap(ar[i], ar[j]);
    }
  }
  for (int i = 0; i < n; ++i) printf("%d\n", ar[i]);
}