class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        int i = nums2.size() - 1;
        vector<int> nums;
        stack<int> st;
        st.push(-1);

        while (i >= 0) {
            if (st.top() > nums2[i]) {
                mp[nums2[i]] = st.top();
                cout<<"the element of nums2 is 1 : "<<nums2[i]<<endl;
                st.push(nums2[i]);

            } else {
                if (!st.empty()) {
                    while (st.top() !=-1 && st.top() <= nums2[i] ) {
                        cout<<"The element to be poped is: "<<st.top()<<endl;
                        st.pop();
                    }
                    mp[nums2[i]] = st.top();

                    cout<<"the element of nums2 is2 : "<<nums2[i]<<endl;
                    st.push(nums2[i]);
                    
                } else {
                    mp[nums2[i]] = st.top();
                }
            }
            i--;
        }

        for(auto a : nums1){
            nums.push_back(mp[a]);
        }

        return nums;
    }
};