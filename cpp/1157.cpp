#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int find_max(int a, int b) {
  if (a > b) {
    return a;
  }
  else {
    return b;
  }
}

int main() {
  string str;
  cin >> str;
  int len = str.size();
  char lower_alp[26], upper_alp[26];
  int mode[26] = {0};
  for (int i = 0; i < 26; ++i) {
    lower_alp[i] = 97 + i;
    upper_alp[i] = 65 + i;
  }
  for (int i = 0; i < len; ++i) {
    for (int j = 0; j < 26; ++j) {
      if (str[i]==lower_alp[j]||str[i]==upper_alp[j]) {
        ++mode[j];
      }
    }
  }
  int max = mode[0];
  for (int i = 0; i < 26; ++i) {
    max = find_max(max, mode[i]);
  }
  if (count(mode, mode+26, max)>1) {
   cout << "?";
  }
  else {
    for (int i = 0; i < 26; ++i) {
      if (mode[i]==max) {
        cout << upper_alp[i];
      }
    }
  }
}
