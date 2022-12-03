#include<bits/stdc++.h> 
using namespace std; 

//my way sorting: 

bool comp(pair<int,int> p1 , pair<int,int> p2) {
    if (p1.second < p2.second) return true; 
    if (p1.second > p2.second) return false; 
    //they are same 
    if (p1.first > p2.first) return true; 
    return false; 
}

int main() {
    // pair <int,int> a[] {{1,2}, {2,1}, {4,1}}; 

    // sort (a, a+n, comp); 

    //permutations of a given string:: 

    string s = "213"; 
    // sort(s.begin(),s.end()); 

    // do {
    //     cout<< s << endl; 
    // }while (next_permutation(s.begin(), s.end())); 

    // int maxi = *max_element(a,a+n);

    // int n; 
    // cin>>n; 

    int A[5] = {1,4,5,6,8}; 
    bool res1 = binary_search(A,A+5,3); 
    bool res2 = binary_search(A,A+5,4); 

    cout << res1 << " " << res2 << endl; 

    return 0; 
}