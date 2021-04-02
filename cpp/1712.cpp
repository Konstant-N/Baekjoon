#include <iostream>
using namespace std;

int main() {
  long double a, b, c;
  cin >> a >> b >> c;
  if (c-b>0) {
    int n = a/(c-b);
    cout << n+1;
  }
  else {
    cout << "-1";
  }
}
