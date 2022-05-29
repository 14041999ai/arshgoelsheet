int kthFactor(int n, int k) {
        vector<int> v;
        for(int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                
                if(n/i==i)
                    v.push_back(i);
                else{
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
        sort(v.begin(), v.end());
        if(v.size()<k)
            return -1;
        else{
            return v[k-1];
        }
    }