// Problem: Asteroid Collision

// Find final state of asteroids after collisions.

// Approach:
// Use vector as stack to simulate asteroid movement.
// Push asteroid and resolve collisions using while loop.

// Explanation:
// - Positive → moving right
// - Negative → moving left
// - Collision happens when previous asteroid moves right
//   and current asteroid moves left.
// - Bigger asteroid survives.
// - Equal size → both explode.

// Time Complexity: O(n)

// Space Complexity: O(n)
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n=a.size();
        vector<int>st;
        for(int i=0;i<n;i++){
            st.push_back(a[i]);
            while(st.size()>=2 && st.back()<0 && st[st.size()-2]>0){
                // if(st[st.size()-2]>0){, causes infinte loop so update in while
                    if(st[st.size()-2]>abs(st.back())){
                        st.pop_back();
                    }
                    else if(st[st.size()-2]<abs(st.back())){
                        int val=st.back();
                        st.pop_back();
                        st.pop_back();
                        st.push_back(val);
                    }
                    else{
                        st.pop_back();
                        st.pop_back();
                    }
            }
        }
        return st;
    }
};
