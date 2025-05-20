//# Binary Search Problems 

/*
   #Leetcode852. Peak Index in a Mountain Array

   int peakIndexInMountainArray(vector<int>& arr) {
        
        int start=0,end=arr.size()-1,mid;
        while(start<=end){
        mid=end+(start-end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        return mid;
        else if(arr[mid]>arr[mid-1])
        start=mid+1;
        else
        end=mid-1;
        }

        return -1;
    }
*/

//#Leetcode 153 Find minimum in Rotated Sorted Array
/*
int findMin(vector<int>& nums) {

       int start=0,end=nums.size()-1,ans=nums[0],mid;

       while(start<=end){
        mid=start+(end-start)/2;
        if(nums[mid]>=nums[0])
        start=mid+1;
        else{
            ans=nums[mid];
            end=mid-1;
        }
       } 

       return ans;
    }
*/

//#Leetcode 33 Search in Rotated Sorted Array

/*

int search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1,mid;

        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target)
            return mid;
            else if(arr[mid]>=arr[0]){
                if(arr[start]<=target && arr[mid]>=target)
                end=mid-1;
                else
                start=mid+1;
            }
            else {
                if(arr[mid]<target && arr[end]>=target)
                start=mid+1;
                else
                end=mid-1;
            }
        }

        return -1;
    }
*/

//#Leetcode 1539 Find kth missing positive integer in an array

/*
 int start=0,end=arr.size()-1,ans=arr.size(),mid;
       
       while(start<=end){
           mid=end+(start-end)/2;
           
           if(arr[mid]-mid-1>=k){
               ans=mid;
               end=mid-1;
           }
           else{
               start=mid+1;
           }
       }
       
       return ans;
    }
*/