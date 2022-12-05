#include<bits/stdc++.h>
using namespace std; 

// bool canPlace(int arr[], int n, int k, int dist){
//     int coord = arr[0], count = 1; 
//     for (int  i = 1; i < n; i++)
//     {
//         /* code */
//         if (arr[i] - coord >= dist){
//             count++; 
//             coord = arr[i]; 
//         }
//         if (count == k) return true; 
//     }
//     return false; 
// }


// int main(){
//     int t; 
//     cin>>t; 
//     while(t--){
//         //binary search code. 
//         int n, k; 
//         cin>>n>>k; 
//         int arr[n], mid, res; 
//         int low=1, high=(arr[n-1] - arr[0]); 
//         while(low <= high){
//             mid = (low + high) / 2;
//             if(canPlace(arr,n,k,mid)){
//                 low = mid + 1; 
//             }
//             else{
//                 high = mid - 1; 
//             }
//         }
//         cout << high << endl;
//     }
// }

//code accepted on gfg. learnt from striver's video. 

// public:

//AGGRESSIVE COWS GFG POTD. 

    bool canPlace(int n, int k, vector<int> &stalls, int dist){
    int coord = stalls[0];
    int count = 1; 
    for (int  i = 1; i < n; i++)
    {
        /* code */
        if (stalls[i] - coord >= dist){
            count++; 
            coord = stalls[i]; 
        }
        if (count == k) return true; 
    }
    return false; 
}

    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(), stalls.end()); 
        int low = 1; 
        int high = stalls[n-1] - stalls[0]; 
        while(low <= high){
            int mid = (low + high) / 2;
            if(canPlace(n,k,stalls,mid)){
                low = mid + 1; 
            }
            else high = mid - 1;
        }
        return high;
        
        
    }

    int main(){
        int n, k; 
        cin>>n>>k; 
        int a; 
        vector<int> stalls; 
        for(int i=0;i<n;i++){
            cin>>a;
            stalls.push_back(a);
        }
        int ans = solve(n,k,stalls); 
        cout<<ans<<endl;
        return 0; 
    }


