#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int div[n];
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    div[i] = a;
  }
  cout << *max_element(div, div + n) * *min_element(div, div + n);
}
