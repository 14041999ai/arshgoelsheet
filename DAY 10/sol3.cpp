int gcd(int a, int b){
        if(b==0)
            return a;
        return gcd(b, a%b);
    }
    
    int maxPoints(vector<vector<int>>& points) {
        
        if(points.size()==0) return 0;
        
        int soluction=0;
        for(int i=0; i<points.size(); i++){
            map<string, int>mp;
            int duplicate=0;
            int maxi=0;
            for(int j=i+1; j<points.size(); j++){
                int deltaX=points[j][0]-points[i][0];
                int deltaY=points[j][1]-points[i][1];
                
                if(deltaX==0 && deltaY==0){
                    duplicate++;
                    continue;
                }
                
                int gc=gcd(deltaX, deltaY);
                int dX=deltaX/gc;
                int dY=deltaY/gc;
                string s=to_string(dX)+","+to_string(dY);
                mp[s]++;
                maxi=max(maxi, mp[s]);
            }
            soluction=max(soluction, maxi+duplicate+1);
        }
        return soluction;
    }