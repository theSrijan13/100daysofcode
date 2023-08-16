class Solution{
    public:
    TreeNode* lowestcommonancestor(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        if(root == NULL)
        {
            return NULL;
        }
        if(root==p || root == q)
        {
            return root;
        }
        TreeNode* leftans = lowestcommonancestor(root->left,p,q);
        TreeNode* rightans = lowestcommonancestor(root->right,p,q);
        if(leftans == NULL && rightans == NULL)
        {
            return NULL;
        }
        else if(leftans != NULL && rightans == NULL)
        {
            return leftans;
        }
        else if(leftans==NULL && rightans != NULL)
        {
            return rightans;
        }
        else {
            return root;
        }
    }
}