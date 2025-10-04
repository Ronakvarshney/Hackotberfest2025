class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> ans(nums.size() , 0);
        for (int i = 2 * nums.size() - 1; i >= 0; i--) {
            while (!st.empty() &&
                   st.top() <= nums[i % nums.size()]) {
                st.pop();
            }

                if (i < nums.size()) {
                    if (!st.empty()) {
                        ans[i] = st.top();

                    } else {
                        ans[i] = -1 ;
                    }
                }

            st.push(nums[i % nums.size()]);
        }

        return ans ;
    }
};
