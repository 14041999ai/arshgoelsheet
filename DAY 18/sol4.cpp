int orangesRotting(vector<vector<int>>& M) {
        vector <pair<int,int>> dir {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
        int n = M.size(), m = M[0].size();
        queue <pair<int,int>> q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(M[i][j] == 2)
                    q.push({i, j});
            }
        }
        int c = -1;
        while(!q.empty()){
            int x = q.size();
            while(x--){
                pair <int,int> p = q.front();
                q.pop();
                for(auto k:dir){
                    int i = p.first + k.first;
                    int j = p.second + k.second;
                    if(i>=0 && i<n && j>=0 && j<m && M[i][j] == 1){
                        M[i][j] = 2;
                        q.push({i, j});
                    }
                }
            }
            c += 1;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(M[i][j] == 1){
                    return -1;
                }
            }
        }
        return c == -1 ? 0 : c;
    }