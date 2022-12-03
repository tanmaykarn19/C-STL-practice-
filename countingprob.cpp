#include<bits/stdc++.h> 
using namespace std;

//checking if there are even number of odd numbers. 
//so that one subarray has one odd number only
//and the rest are in the subarray where all even numbers are stored. 
//hence the resultant  will always be an odd number. 

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n; 
        int arr[n]; 

        for (int i=0; i<n; i++) {
            cin >> arr[i]; 
        }

        int even = 0; 
        int odd = 0; 

        for (int i=0; i<n; i++) {
            if (arr[i] % 2 == 0) {
                even++; 
            }
            else {
                odd++; 
            }
        }

        if (odd % 2 == 0 && odd != 0) {
            cout << "YES" << endl; 
        }
        else {
            cout << "NO" << endl; 
        }
    }
}