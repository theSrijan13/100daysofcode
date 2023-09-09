class Solution
{
    void solve(TreeNode* root,int targetSum,int &count,vector<int> path)
    {
        // base 
        if(root==NULL)
        {
            return;

        }
        // put data in push
        path.push_back(root->val);
        // traverse
        solve(root->left,targetSum,count,path);
        solve(root->right,targetSum,count,path);
        // k sum
        int size = path.size();
        long long sum=0;
        for(int i= size-1;i>=0 ; i--)
        {
            sum+=path[i];
            if(sum==targetSum)
            {
                count++;
            }
        }
        path.pop_back();
    }
    public:
    int pathSum(TreeNode* root, int targetSum)
    {
        vector<int> path;
        int count =0;
        solve(root,targetSum,count,path);
        return count;
    }
}