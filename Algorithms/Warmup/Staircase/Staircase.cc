#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n-i; s++) {
            cout << " ";
        }
        for (int h = 1; h <= i; h++) {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}
