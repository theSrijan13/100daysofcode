class Solution{
    public:
    int missingNumber(vector<int>& nums){
        int n = nums.size()+1;
        int total = (n*(n-1))/2;
        for(int num : nums){
            total=total-num;
        }
        return total;
        
    }
}