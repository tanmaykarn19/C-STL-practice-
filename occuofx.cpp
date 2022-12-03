#include<bits/stdc++.h>
using namespace std; 

int UB(int a[], int n, int X){
    int ind = upper_bound(a,a+n,X) - a; 
    ind--; 
    if (ind >= 0 && a[ind] == X){
        return ind; 
    }
     return -1; 
}

int LB(int a[], int n, int X){
    int ind = lower_bound(a,a+n,X) - a; 
    if (ind != 0 && a[ind] == X){
        return ind; 
    }
     return -1; 

}

int main() {

    int n; 
    cout << "enter the number of elements in the array:" <<endl; 
    cin >> n;
    int a[n];  
    cout << "enter the elements of the array:" <<endl; 
    for (int i = 0; i<n; i++){
        cin >> a[i]; 
    }
    int option; 
    cout<<"enter 1 for upper bound and 2 for lower bound:"<<endl;
    cin >> option; 

    if (option == 1){
         
        int test_num1; 
        cout<<"enter the testing number:"<<endl;
        cin>>test_num1; 
        cout<<UB(a,n,test_num1)<<endl;
    }

        else if (option == 2){
        int test_num2; 
        cout<<"enter the testing number:"<<endl; 
        cin>>test_num2; 
        cout<<LB(a,n,test_num2)<<endl; 
        }

        
     

    return 0; 


}