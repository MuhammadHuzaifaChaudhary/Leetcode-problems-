class Solution {
public:

   // FIRST WE WILL  CREATE A HELPER FUNCTION 
   int binarysearch(vector<int>&arr,int target,int st, int end)
   { 

     if(st<=end)
     {
        int mid=st+(end-st)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<=target)
        {
            return binarysearch(arr,target,mid+1,end);
        }
        else
        {
            return binarysearch(arr,target,st,mid-1);
        }
     }
     return -1;
   }

    int search(vector<int>& nums, int target) {
        return binarysearch(nums,target,0,nums.size()-1);
    }
};