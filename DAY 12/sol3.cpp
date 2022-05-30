#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> product(int arr[], int N){
    int prefix[N];
    prefix[0]=1;
    int pro=1;
    for(int i=0; i<N-1; i++){
        pro=pro*arr[i];
        prefix[i+1]=pro;
    }

    pro=1;
    int suffix[N];
    suffix[N-1]=1;
    for(int i=0; i<N; i++){
        pro=pro*arr[N-1];
        suffix[N-1-1]=pro;
    }

    vector<int>v;
    for(int i=0; i<N; i++){
        int val=prefix[i]*suffix[i];
        v.push_back(val);
    }

    return v;
}
int main(){

return 0;
}