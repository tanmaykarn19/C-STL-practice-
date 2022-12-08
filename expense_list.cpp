#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t; 
	while(t--){
	   int n, x; 
	   cin>>n>>x; 
	   int tot = pow(2,x); 

	   for(int i=0; i<n; i++){
			tot -= tot/2; 
	   }
	   cout<<tot<<endl;
	}
	return 0;
}
