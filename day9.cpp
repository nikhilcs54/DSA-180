//#Leetcode 34. Find First and Last Position of Element in Sorted Array

/*
vector<int> searchRange(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid,first=-1,last=-1;

        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

     start=0,end=nums.size()-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }

        vector<int>a(2);
        a[0]=first;
        a[1]=last;

        return a;
    }
*/

//# Leetcode 35. Search Insert Position

/*

int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid,ans=nums.size();

        while(start<=end){
           mid=start+(end-start)/2;
           if(nums[mid]==target){
            return mid;
           }
           else if(nums[mid]<target){
            start=mid+1;
           }
           else{
            ans=mid;
            end=mid-1;
           }
        }

        return ans;
    }
*/

//# Leetcode 69. Sqrt(x)

/*

int mySqrt(int x) {
       int start=0,end=x,ans,mid;

       if(x<2)
       return x;
       while(start<=end){
        mid=start+(end-start)/2;

        if(mid==x/mid)
        return mid;
        else if(mid<x/mid){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       } 

       return ans;
    }
*/