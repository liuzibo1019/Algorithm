#include <bits/stdc++.h>
using namespace std;

struct node
{
    char val;
    node *left;
    node *right;
};

vector<char> res;

void PostTraverse(node *root)
{
    if (root == NULL)
    {
        return;
    }
    PostTraverse(root->left);
    PostTraverse(root->right);
    res.push_back(root->val);
    return;
}

node *buildTree(string p, string m)
{
    if (p.size() == 0 || m.size() == 0)
    {
        return NULL;
    }
    node *root = new node();
    root->val = p[0];
    int indexInM = m.find(p[0]);
    // cout << "index: " << indexInM << endl;
    string LeftStringP = p.substr(1, indexInM);
    // cout << "1" << LeftStringP << endl;
    string RigthStringP = p.substr(indexInM + 1);
    // cout << "2" << RigthStringP << endl;
    string LeftStringM = m.substr(0, indexInM);
    // cout << "3" << LeftStringM << endl;
    string RigthStringM = m.substr(indexInM + 1);
    // cout << "4" << RigthStringM << endl;
    root->left = buildTree(LeftStringP, LeftStringM);
    root->right = buildTree(RigthStringP, RigthStringM);
    return root;
}

int main()
{
    string p, m;
    while(cin >> p >> m){
        res.clear();
        node* root = buildTree(p, m);
        PostTraverse(root);
        for(char c: res){
            cout << c;
        }
        cout << endl;
    }
    return 0;
}