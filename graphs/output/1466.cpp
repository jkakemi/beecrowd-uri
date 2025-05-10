#include <bits/stdc++.h>

using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int v) : value(v), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int v) {
    if (root == nullptr) return new Node(v);

    if (v < root->value)
        root->left = insert(root->left, v);
    else if (v > root->value)
        root->right = insert(root->right, v);

    return root;
}

void bfs(Node* root) {  
    if(!root) return;

    vector<int> valores;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* atual = q.front();
        q.pop();

        valores.push_back(atual->value);

        if(atual->left){
            q.push(atual->left);
        }
        if(atual->right){
            q.push(atual->right);
        }
    }

    for(int i=0; i<valores.size(); i++){
        if(i > 0) cout << " ";
        cout << valores[i];
    }
    cout << endl;
}

int main() {
    Node* root = nullptr;
    
    int cases;

    cin >> cases;
    int j=0;
    while(cases--){
        int x;
        cin >> x;

        root = nullptr;
        for(int i=0; i<x; i++){
            int c;
            cin >> c;
            root = insert(root, c);
        }

        cout << "Case " << j+1 << ":\n";
        bfs(root);
        cout << endl;
        j++;
    }
    
    return 0;
}
