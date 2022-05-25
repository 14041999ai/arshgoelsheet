string addBinary(string a, string b) {
        
        string ans="";
        int i=a.length()-1, j=b.length()-1, carry=0;
        while(i>=0 || j>=0){
            int sum=carry;
            if(j>=0) sum+=b[j--]-'0';
            if(i>=0) sum+=a[i--]-'0';
            int x=sum%2;
            ans=ans+char(x+'0');
            carry=sum/2;
        }
        
        if(carry)
           ans=ans+char(carry+'0');
        
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};