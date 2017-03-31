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
    
    int a,b;
    cin >> a;
    
    v.erase(v.begin() + a - 1);
    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);
  
    cout << v.size() << endl;
    for (int i=0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
  
    return 0;
}