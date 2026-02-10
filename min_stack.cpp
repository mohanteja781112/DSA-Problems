// Problem: Min Stack

// Design a stack that supports push, pop, top,
// and retrieving the minimum element in constant time.

// Approach:
// Use stack of pair<int,int>.
// First value → actual element
// Second value → minimum element till that index.

// Explanation:
// - While pushing, store current value and
//   minimum between current value and previous minimum.
// - While popping, remove top element normally.
// - Top element gives actual value.
// - Minimum element is stored at top.second.

// Time Complexity:
// push()   → O(1)
// pop()    → O(1)
// top()    → O(1)
// getMin() → O(1)
// Space Complexity:
// O(n) → Each element stores a pair {value, current minimum}
class MinStack {
public:
    stack<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.size()==0) st.push({val,val});
        else st.push({val,min(val,st.top().second)});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return minst.top().second;
    }
};
