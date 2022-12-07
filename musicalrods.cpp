#include<bits/stdc++.h>
using namespace std; 
#define int long long 

bool comp(pair<int, int> p1, pair<int, int> p2){
	if(p1.first*p2.second > p1.second*p2.first) return true;
	return false; 
}

bool solve(){
	int n; 
	cin>>n; 
	vector<pair<int, int>> rod(n); 
	for(int i=0; i<n; i++) cin>> rod[i].first;	
	for(int i=0; i<n; i++) cin>> rod[i].second; 

	sort(rod.begin(), rod.end(), comp); 

	int sum = 0, ans = 0; 
	for (int i = 0; i<n; i++)
	{
		/* code */
		ans += sum*rod[i].second; 
		sum += rod[i].first;
	}

	cout<<ans<<endl;
	return true; 

}

signed main(){
	int t;
	cin>>t; 
	while(t--){
		solve();
	}
	return 0; 
}