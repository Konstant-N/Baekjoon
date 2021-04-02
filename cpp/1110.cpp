#include <iostream>

using namespace std;

int main() {
  int n, a, cycle=1;
  cin >> n;
  a = n;
  n = n = (n%10)*10+((n/10)+(n%10))%10;
  while (a!=n) {
    n = (n%10)*10+((n/10)+(n%10))%10;
    cycle += 1;
  }
  cout << cycle;
}
