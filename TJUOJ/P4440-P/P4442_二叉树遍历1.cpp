#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    char val;
    TreeNode *left;
    TreeNode *right;
};

string s;

TreeNode *buildTree()
{
    if (s[0] == '#')
    {
        s = s.substr(1);
        return NULL;
    }
    TreeNode *root = new TreeNode();
    root->val = s[0];
    s = s.substr(1);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void midOrder(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    midOrder(root->left);
    cout << root->val << " ";
    midOrder(root->right);
}

int main()
{
    while (cin >> s)
    {
        TreeNode *root = buildTree();
        midOrder(root);
        cout << endl;
    }
    return 0;
}