#include<bits/stdc++.h>
using namespace std; 
#define int long long  

signed main(){
    int t; 
    cin>>t;
    while(t--){
        int n, k; 
        cin>>n>>k;
        int no = n/2;  
        if(n==1){
            cout<<0<<endl;
        }

        else if(no<=k){
            int ans = n*(n-1); 
            cout<<ans/2<<endl;    
        }
        else if (no>k){
            int ans = (n*(n-1))/2;
            int me =  n - (2*k);
            int sum_me = (me*(me-1))/2; 
            ans = ans - sum_me; 
            cout<<ans<<endl;
        }
        
    }
    return 0;
}