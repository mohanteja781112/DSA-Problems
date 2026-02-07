// Problem: Longest Balanced Subsequence

// Find longest subsequence where all elements appear equal number of times.

// Approach:
// Count frequencies and choose maximum possible balanced length.

// Time Complexity: O(n log n)

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>a(n); for(int i=0;i<n;i++) cin>>a[i];
		unordered_map<int,int>u;
		for(auto &i:a) u[i]++;
		vector<int>v;
		for(auto &i:u){
			v.push_back(i.second);
		}
		sort(v.begin(),v.end());
		int s=v.size();
		int m=0;
		for(int i=0;i<s;i++) m=max(m,(v[i]*(s-i)));
		cout<<m<<endl;
	}
} 
