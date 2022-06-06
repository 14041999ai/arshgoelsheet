bool backspaceCompare(string s, string t) {
       stack<char> stk1;
       stack<char> stk2;
        
        for(auto &i:s){
            if(i=='#' && stk1.size()>0)stk1.pop();
            if(i>='a'&& i<='z')stk1.push(i);
        }
        
        for(auto &i:t){
            if(i=='#' && stk2.size()>0)stk2.pop();
            if(i>='a'&& i<='z')stk2.push(i);
        }
        
        if(stk1==stk2)
            return true;
        else
            return false;
    }