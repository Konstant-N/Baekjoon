#include <iostream>
using namespace std;

int hans(int n) {
  if (n<100) {
    return 0;
  }
  else {
    int a, b, c;
    a = n%10;
    b = ((n-a)/10)%10;
    c = n/100;
    if (a+c==2*b) {
      return 0;
    }
    else {
      return 1;
    }
  }
}

int main() {
  int n, count=0;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    if (hans(i)==0) {
      count += 1;
    }
  }
  cout << count;
}
