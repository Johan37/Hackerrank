#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  vector<int> v;
  int n;
  cin >> n;
  
  for (int i=0; i < n; i++) {
    int new_val;
    cin >> new_val;
    v.push_back(new_val);
  }
  
  sort(v.begin(), v.end());
  
  for (int i=0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  
  return 0;
}