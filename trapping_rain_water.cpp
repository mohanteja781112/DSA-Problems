// Problem: Trapping Rain Water

// Find total water trapped between elevation bars after rain.

// Approach:
// Use two pointers (left and right).
// Track maximum height from left (lmax) and right (rmax).
// Move pointer with smaller height and calculate trapped water.

// Explanation:
// - Water trapped at any index depends on minimum of
//   left maximum height and right maximum height.
// - If left height <= right height → process left side.
// - If right height < left height → process right side.
// - Add trapped water using difference between max height and current height.

// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int trap(vector<int>& a) {
        int n=a.size();
        int l=0,r=n-1;
        int lmax=0,rmax=0,tot=0;
        while(l<r){
            if(a[l]<=a[r]){
                if(lmax>a[l]) tot+=lmax-a[l];
                else lmax=a[l];
                l++;
            }
            else{
                if(rmax>a[r]) tot+=rmax-a[r];
                else rmax=a[r];
                r--;
            }
        }
        return tot;
    }
};
