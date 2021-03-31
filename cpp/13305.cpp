#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long distant[n-1];
  long long price[n];
  for (int i = 0; i < n-1; ++i) {
    cin >> distant[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> price[i];
  }
  long long min_price = price[0];
  long long total_price = 0;
  for (int i = 0; i < n-1; ++i) {
    if (min_price > price[i]) {
      min_price = price[i];
    }
    total_price += min_price * distant[i];
  }
  cout << total_price;
}
