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
