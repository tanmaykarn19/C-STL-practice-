#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n, x, c, count = 0; 
        cin>>n>>x>>c; 
        int arr[n];

        for (int i=0; i<n; i++)
        {
            cin>>arr[i]; 
        } 

        int sum = 0; 

        for(int i=0; i<n; i++)
        {
            if (x - arr[i] > c)
            {
                sum += x; 
                count += c; 
            }
                
            else 
            {
                sum += arr[i]; 
            }

        }
        cout<< sum - count <<endl;
    }
}