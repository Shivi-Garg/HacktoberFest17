#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

struct Node* root;

Node* CreateNode(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

Node* insert_data(Node* root,int x){
    if(root == NULL){
        root = CreateNode(x);
        cout<<"Element inserted"<<endl;
    }
    else if(root->data>=x){
        root->left = insert_data(root->left,x);
    }else{
        root->right = insert_data(root->right,x);

    }
    return root;

}

void print(Node* root){

    if(root->left!=NULL){
        print(root->left);
    }
    cout<<root->data<<endl;

    if(root->right!=NULL){
        print(root->right);
    }

}

void search_bst(Node* root,int x){
    if(root == NULL){
        cout<<"Not found "<<endl;
    }else if(root->data == x){
        cout<<"Found "<<endl;
    }
    else if(root->data>x){
        search_bst(root->left,x);
    }else if(root->data<x){
        search_bst(root->right,x);
    }

}

void min_bst(Node* root){
    if(root->left!=NULL){
        min_bst(root->left);
    }else{
        cout<<"Minimun in bst: "<<root->data<<endl;
    }


}

void max_bst(Node* root){
    if(root->right!=NULL){
        max_bst(root->right);
    }else{
        cout<<"Maximum in bst :"<<root->data<<endl;
    }


}

int main()
{   root = NULL;
    int n,x;
    cout<<"Enter number of elements want to insert in bst :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the elements :";
        cin>>x;
        root = insert_data(root,x);
    }

    cout<<"preorder traversal :"<<endl;
    print(root);

    for(int i=0;i<3;i++){
        cout<<"Enter the element you want to search :";
        cin>>x;
        search_bst(root,x);
    }

    cout<<"Minimum and Maximum in bst "<<endl;
    min_bst(root);
    max_bst(root);


    return 0;
}





















