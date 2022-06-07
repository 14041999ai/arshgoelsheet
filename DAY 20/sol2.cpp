    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        map<int, int> mp;
        stack<int>stk;
        for(auto num:nums2){
            while(!stk.empty() && stk.top()<num){
                mp[stk.top()]=num;
                stk.pop();
            }
            stk.push(num);
        }
        
        for(int i=0; i<nums1.size(); i++){
            nums1[i]=mp.find(nums1[i])!=mp.end()?mp[nums1[i]]:-1;
        }
        return nums1; 
    }