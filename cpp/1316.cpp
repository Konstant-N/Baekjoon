#include <iostream>
#include <string>

using namespace std;

int main() {
  int num, count = 0;
  cin >> num;
  string str[num];
  for (int i = 0; i < num; ++i) {
    cin >> str[i];
  }
  char alp[26];
  string alp_alp[26], str_alp[26];
  for (int i = 0; i < 26; ++i) {
    alp[i] = 97 + i;
    str_alp[i] = alp[i];
    alp_alp[i] = str_alp[i] + str_alp[i];
  }
  for (int i = 0; i < num; ++i) {
    string m_str = str[i];
    for (int j = 0; j < 26; ++j) {
      int index = m_str.find(alp_alp[j]);
      while (index < m_str.size()+1) {
        m_str.replace(index, 2, str_alp[j]);
        index = m_str.find(alp_alp[j]);
      }
    }
    bool exit = false;
    for (int j = 0; j < m_str.size()-1; ++j) {
      for (int k = j+1; k < m_str.size(); ++k) {
        if (m_str[j]==m_str[k]) {
          ++count;
          exit = true;
          break;
        }
      }
      if (exit)
        break;
    }
  }
  cout << num - count;
}
