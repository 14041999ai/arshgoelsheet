int mctFromLeafValues(vector<int>& arr) {
        int res=0;
        stack<int>stk;
        stk.push(INT_MAX);
        for(auto a:arr){
            while(a>=stk.top()){
                int mid=stk.top();
                stk.pop();
                res+=mid*min(a,stk.top());
            }
            stk.push(a);
        }
        
        while(stk.size()>2){
            int a=stk.top();
            stk.pop();
            res+=a*stk.top();
            
        }
        
        return res;
    }