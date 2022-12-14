#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n, k; 
        cin>>n>>k; 

        int A[n] , B[n]; 
        map<int, int> mpp; 
        for (int i=0; i<n; i++)
        {
            cin>>A[i]; 
            mpp[A[i]] = INT_MAX; 
            
        }

        for (int i=0; i<n; i++)
        {
            cin>>B[i]; 
        }

        if (mpp.size()<k)
        {
            cout<<-1<<endl; 
            continue; 
        }

        for(int i=0; i<n; i++)
        {
            mpp[A[i]] = min (B[i], mpp[A[i]]); 
        }

        vector<int>res; 

        for (auto i : mpp)
        {
            res.push_back(i.second);
        }

        sort(res.begin(), res.end()); 

        long long total = 0; 
        for (int i=0; i<k; i++)
        {
            total += res[i]; 
        }
        cout<<total<<endl;
    }

    return 0; 
}