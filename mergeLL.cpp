#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

struct Node* head1;
struct Node* head2;

Node* insert_end(Node* head,int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if(head!=NULL){
        Node* ptr = head;
        while(ptr->next!=NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
        cout<<"Element inserted"<<endl;

    }else{
        head = temp;
        cout<<"Link list created"<<endl;
    }
    return head;

}

void print(Node* head){
    Node* ptr = head;
    while(ptr!=NULL){
        cout<<"->"<<ptr->data;
        ptr = ptr->next;
    }
    cout<<endl;

}

Node* merge_list(Node* list1,Node* list2){
    Node* ptr = list1;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = list2;
    list2 = list1;
    cout<<"List Merged"<<endl;
    return head1;

}

Node* sort_list(Node* head){
    Node* temp = new Node();
    temp->next = NULL;
    Node* ptr1 = head;
    Node* ptr2 = head;
    while(ptr1!=NULL){
        if(ptr->)

    }


}


int main()
{   head1 = NULL;
    head2 = NULL;
    int n1,n2,x;
    cout<<"Number of elements want to insert in link list1:";
    cin>>n1;
    for(int i = 0;i<n1;i++){
        cout<<"Enter the element:";
        cin>>x;
        head1 = insert_end(head1,x);
        print(head1);
    }

    cout<<"Enter the elements want to insert in link list 2:";
    cin>>n2;
    for(int i=0;i<n2;i++){
        cout<<"Enter the elements :";
        cin>>x;
        head2 = insert_end(head2,x);
        print(head2);
    }

    cout<<"Merging of two sorted link list :";
    head1 = merge_list(head1,head2);
    print(head1);

    cout<<"Sorting the link list :";
    head1 = sort_list(head1);
    print(head1);


    return 0;
}

























