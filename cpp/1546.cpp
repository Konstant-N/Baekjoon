#include <iostream>
using namespace std;

int findMax(int a, int b) {
  if (a>=b) {
    return a;
  }
  else {
    return b;
  }
}

int main() {
  int n;
  cin >> n;
  int score[n];
  double score_sum = 0;
  for (int i = 0; i < n; ++i) {
    cin >> score[i];
    score_sum += score[i];
  }
  int max = score[0];
  for (int i = 0; i < n; ++i) {
    max = findMax(max,score[i]);
  }
  cout << score_sum * 100 / (n * max);
}
