#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    char val;
    TreeNode *left;
    TreeNode *right;
};

int cnt;

TreeNode *buildTree(string s)
{
    if (s[cnt] == '#')
    {
        cnt++;
        return NULL;
    }
    TreeNode *root = new TreeNode();
    root->val = s[cnt];
    cnt++;
    root->left = buildTree(s);
    root->right = buildTree(s);
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
    string s;
    while (cin >> s)
    {
        cnt = 0;
        TreeNode *root = buildTree(s);
        midOrder(root);
        cout << endl;
    }
    return 0;
}