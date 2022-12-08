#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t; 
	while(t--){
	    int a, b, c; 
	    cin>>a>>c; 
	    if(abs(a-c) % 2 != 0){
	        cout<<"-1"<<endl;
	    }
	    else if (abs(a-c) % 2 == 0){
	        int temp = abs(a-c); 
	        a += temp/2;
	        cout<<a<<endl;
	    }
	}
	return 0;
}
