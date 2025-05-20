#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    //# Trapping Rain Water 

    /*
    int trap(vector<int>& height) {
       int maxleft=0,maxright=0,water=0,maxheight=height[0],index=0;
       int n=height.size();

       for(int i=1;i<n;i++){
        if(maxheight<height[i])
        {
            maxheight=height[i];
            index=i;
        }
       } 

       for(int i=0;i<index;i++){
        if(maxleft>height[i])
            water+=maxleft-height[i];
        else
            maxleft=height[i];
       } 

       for(int i=n-1;i>index;i--){
        if(maxright>height[i])
            water+=maxright-height[i];
        else
            maxright=height[i];
       } 

       return water;
    }
    */

   //#3Sum

   /*
    bool hasTripletSum(vector<int> &arr, int target) {
        // Your Code Here
        
        int n=arr.size();
        
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n-2;i++){
            
            int x=target-arr[i],start=i+1,end=n-1;
            
            while(start<end){
                if(arr[start]+arr[end]==x)
                return true;
                else if(arr[start]+arr[end]<x)
                start++;
                else
                end--;
            }
        }
        
        return false;
    }
   */
}