class Solution{
    public:
    int findMiddleIndex(vector<int>& nums){
        int t=0;
        for(int num:nums)t=t+num;
        int temp=0;
        for(int i=0;i<nums.size();temp=temp+nums[i++]){
            if(nums[i]==t-2*temp){
                return i;
            }
        }
        return -1;
        
    }
}