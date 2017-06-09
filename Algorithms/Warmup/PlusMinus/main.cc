#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    float num_pos = 0;
    float num_neg = 0;
    float num_zero = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            num_pos++;
        }
        else if (arr[i] < 0) {
            num_neg++;
        }
        else {
            num_zero++;
        }
    }
    cout << num_pos / arr.size() << endl;
    cout << num_neg / arr.size() << endl;
    cout << num_zero / arr.size() << endl;
    return 0;
}
