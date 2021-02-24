#include <bits/stdc++.h>

using namespace std;



int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
        for(int arr_j = 0;arr_j < 6;arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }
    
    int max = INT_MIN, sum = 0;
    for(int arr_i = 0;arr_i < 4;arr_i++){
        for(int arr_j = 0;arr_j < 4;arr_j++){
            sum = arr[arr_i][arr_j];
            sum += arr[arr_i][arr_j + 1];
            sum += arr[arr_i][arr_j + 2];
            sum += arr[arr_i + 1][arr_j + 1];
            sum += arr[arr_i + 2][arr_j];
            sum += arr[arr_i + 2][arr_j + 1];
            sum += arr[arr_i + 2][arr_j + 2];
            if ( sum > max ) {
                max = sum;
            }
        }
    }
    cout << max;
    return 0;
}
