class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int index=-1;
        vector<int> pos(2,-1);
        if(nums.empty())
        {
            pos[0]=-1;
            pos[1]=-1;
        }
        else
        {
           //first occurence
           while(start<=end)
           {
              int middle = (start+end)/2;
              if(target==nums[middle])
              {
                index=middle;
                end=middle-1;
              }
              else if(target>nums[middle])
              {
                start=middle+1;
              }
              else
                 end=middle-1;
           }
           pos[0]=index;
           start=0;
           end=nums.size()-1;
           index=-1;
           while(start<=end)
           {
               int middle=(start+end)/2;
               if(target==nums[middle])
               {
                  index=middle;
                  start=middle+1;
               }
               else if(target<nums[middle])
               {
                  end=middle-1;
               }
               else 
                 start=middle+1;
           }
            pos[1]=index;
        
        }
        return pos;
    }
};
