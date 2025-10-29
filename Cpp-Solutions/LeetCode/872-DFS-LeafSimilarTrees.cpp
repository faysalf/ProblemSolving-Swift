#include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
    public:
        vector<int> leaf1;
        bool result = true;

        void dfs(TreeNode* root, bool isFirst) {
            if (!root) { return; }
            
            if (!(root->left || root->right)) {
                if (isFirst) {
                    leaf1.push_back(root->val);
                }
                else {
                    int current = leaf1.front();
                    if (!current || current != root->val) {
                        result = false;
                        return;
                    }
                    leaf1.erase(leaf1.begin());
                }
            }

            if (root->left) {
                dfs(root->left, isFirst);
            }
            if (root->right) {
                dfs(root->right, isFirst);
            }
            
        };
        
        bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
            dfs(root1, true);
            dfs(root2, false);
        
            return (result && leaf1.empty());

        };

};
