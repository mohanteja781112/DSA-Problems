// Problem: The Ritual of the Obsidian Spire

// Find sum of squares of digits of N and check parity.

// Approach:
// Extract digits, square them, sum them, check even or odd.

// Time Complexity: O(d) // d = number of digits
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		long long sum=0;
		while(n>0){
			sum+=((n%10)*(n%10));
			n/=10;
		}
		if(sum%2==0) cout<<"LUX\n";
		else cout<<"NOX\n";
	}
}
