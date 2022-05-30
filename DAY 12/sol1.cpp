#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool pair(int arr[], int size, int n){

    sort(arr, arr+size);
    int i=0, j=1;
    while(i<n && j<n){
        if(i!=j && (arr[j]-arr[i]==n || arr[i]-arr[j]==n)){
            return true;
        }

        else if(arr[j]-arr[i]<n){
            j++;
        }
        else{
            i++;
        }
    }
    return false;
}
int main(){

return 0;
}