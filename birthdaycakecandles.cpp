#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int ctr = 0;
    
    int max = INT_MIN;
    
    for (auto val : ar) {
         if (max < val) max = val;
    }
    for (auto val : ar){
        if (val == max) ctr++;
        
    }
    return ctr; 
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

