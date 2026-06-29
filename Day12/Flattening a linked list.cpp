/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
}; */

class Solution {
  public:
    Node* merge(Node* head1,Node* head2){
        Node* dummy=new Node(-1);
        Node* tail=dummy;
        
        Node* list1=head1;
        Node* list2=head2;
        
        while(list1!=nullptr&&list2!=nullptr){
            if(list1->data<=list2->data){
                tail->bottom=list1;
                list1=list1->bottom;
            }else{
                tail->bottom=list2;
                list2=list2->bottom;
            }
            tail=tail->bottom;
        }
        if(list1!=nullptr){
            tail->bottom=list1;
        }else{
            tail->bottom=list2;
        }
        return dummy->bottom;
    }
    Node *flatten(Node *root) {
        // code here
        if(root==nullptr||root->next==nullptr){
            return root;
        }
        root->next=flatten(root->next);
        return merge(root,root->next);
    }
};