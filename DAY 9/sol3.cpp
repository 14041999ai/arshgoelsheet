#include <iostream>
using namespace std;


int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int left[n], right[n];
        stack<int>s1;
        s1.push(-1);
        s1.push(0);
        left[0]=-1;
        
        for(int i=1; i<n; i++){
            if(heights[s1.top()]<heights[i]){
                left[i]=s1.top();
                s1.push(i);
            }else{
                while(s1.size()>1 && heights[s1.top()]>=heights[i]){
                    s1.pop();
                }
                left[i]=s1.top();
                s1.push(i);
            }    
        } 
        
        while(!s1.empty())
            s1.pop();
        
         s1.push(n);
         right[n-1]=n;
         s1.push(n-1);
        for(int i=n-2; i>=0; i--){
            if(heights[i]>heights[s1.top()]){
                right[i]=s1.top();
                s1.push(i);
            }
            else{
                while(s1.size()>1 && heights[s1.top()]>=heights[i]){
                    s1.pop();
                }
                right[i]=s1.top();
                s1.push(i);
            }
        }   
        
        int max_area=0;
        for(int i=0; i<n; i++){
            int area=(right[i]-left[i]-1)*heights[i];
            max_area=max(area, max_area);
        }
        
        return max_area;
    }


int maxRectangle(int A[][C])
{
    
    int result = largestRectangleArea(A[0]);
 
    
    for (int i = 1; i < R; i++) {
 
        for (int j = 0; j < C; j++)
 
            if (A[i][j])
                A[i][j] += A[i - 1][j];
 
        result = max(result, largestRectangleArea(A[i]));
    }

     return result;
     }
int main(){
    int A[][C] = {
        { 0, 1, 1, 0 },
        { 1, 1, 1, 1 },
        { 1, 1, 1, 1 },
        { 1, 1, 0, 0 },
    };
 
    cout << "Area of maximum rectangle is "
         << maxRectangle(A);
 
    return 0;
}