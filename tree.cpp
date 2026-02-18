#include<bits/stdc++.h>
using namespace std;


class tree{
    public:
    int data;
    vector<tree*>child;
    tree(int d){
        data=d;
    }
    tree* addchild(int d){
        tree* newchild=new tree(d);
        child.push_back(newchild);
        return newchild;
    }

    tree* getchild(int d){
        for(auto x:child){
            if(x->data==d){
                return x;
            }
        }
        return NULL;
    }
    void printtree(string prefix=""){
        cout<<prefix<<data<<endl;
        for(auto x:child){
            x->printtree(prefix+"--");
        }
    }
    ~tree(){
        for(auto x:child){
            delete x;
        }
    }

};

void bfs(tree* root){
    queue<tree *>q;
    q.push(root);
    while(!q.empty()){
        tree* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        for(auto x:curr->child){
            q.push(x);
        }
    }

}

void dfs(tree* root){
    if(root==nullptr)return;
    cout<<root->data<<" ";
    for(auto x:root->child){
        dfs(x);
    }

}

int main(){
    tree*root=new tree(10);
    tree*child1=root->addchild(20);
    tree*child2=root->addchild(30);
    child1->addchild(40);
    child1->addchild(50);
    child2->addchild(60);
    root->printtree();
    cout<<"BFS Traversal: ";
    bfs(root);
    cout<<"\ndfs travesal ";
    dfs(root);
    delete root;
    return 0;
}