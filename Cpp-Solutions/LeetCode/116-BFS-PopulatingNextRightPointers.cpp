#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
public:
    Node* connect(Node* root) {
        vector<Node*> que;
        que.push_back(root);
        
        while (!que.empty()) {
            int sz = que.size();

            for (int idx = 0; idx<sz-1; idx++) {
                que[idx]->next = que[idx+1];
            }
            if (que[sz-1]) {
                que[sz-1]->next = nullptr;
            }

            for (auto node: que) {
                Node* current = que.front();
                que.erase(que.begin());
                if (!current) continue;

                if (current->left) {
                    que.push_back(current->left);
                }
                if (current->right) {
                    que.push_back(current->right);
                }
                
            }

        }
        
        return root;
    }
    
};
