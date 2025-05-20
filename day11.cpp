//# Book Allocation Problems

/*

int n=arr.size(),start=0,end=0,mid,ans;
        
        if(n<k)
        return -1;
        
        start=arr[0];
        for(int i=0;i<n;i++){
            if(start<arr[i])
            start=arr[i];
        }
        
        for(int i=0;i<n;i++){
            end+=arr[i];
        }
        
        while(start<=end){
            mid=start+(end-start)/2;
            
            int page=0,count=1;
            
            for(int i=0;i<n;i++)
            {
              page+=arr[i];
            if(page>mid)
              {
                  count++;
                  page=arr[i];
              }
            }
            
            if(count<=k){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        
        return ans;
*/