#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void driver()
{
    
int n;
cin >> n;

int a[n];

for(int i=0;i<n;i++) cin >> a[i];



sort(a,a+n);
int ans = 0;

for(int i=0;i<n;)
{
    if(a[i] > i+1)
    {
        cout << -1 << endl;
        return;
    }
    
    else if(a[i] == i+1)
    {
        i++;
    }
    else
    {
        ans += (i+1)-a[i];
        i++;
    }
}

cout << ans << endl;



}
 

int main() {
	   int t;
	   cin >> t;
	   while(t--)
	   {
	       driver();
	   
	   }
	return 0;
}