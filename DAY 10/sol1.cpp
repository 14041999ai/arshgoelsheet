bool isPowerOfTwo(int n) {
        if(n<0){
            return false;
        }
        int count=0;
        while(n){
            if(n&1)
                count++;
            n=n>>1;
        }
        
        if(count==1) 
            return true;
        else
            return false;
    }