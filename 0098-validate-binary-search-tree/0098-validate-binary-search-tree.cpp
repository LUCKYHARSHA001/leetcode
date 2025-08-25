/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 vector<int>ans;
void inorder(TreeNode* root){
    if(root!=nullptr){
    inorder(root->left);
    ans.push_back(root->val);
    inorder(root->right);
    }
}
    bool isValidBST(TreeNode* root) {
    inorder(root);
    vector<int>check=ans;
    sort(check.begin(),check.end());
    for(int i=0;i<check.size()-1;i++){
        if(check[i]==check[i+1]){
            return false;
        }
    }
    for(int i=0;i<check.size();i++){
        cout<<ans[i];
    }
    return check==ans;
    }
};