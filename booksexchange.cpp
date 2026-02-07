// Problem: Books Exchange

// Find number of days required for each kid to receive their own book again.

// Approach:
// Treat permutation as cycles and find length of cycle for each index.

// Explanation:
// Each kid gets their book back after completing one full cycle in the permutation.

// Example:
// Input:  3 -> 2 3 1
// Output: 3 3 3

// Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n+1),r; 
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            int k=1;
            int curr_val=a[i];
            while(i!=curr_val){
                curr_val=a[curr_val];
                k++;
            }
            r.push_back(k);
        }
        for(auto i:r) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
