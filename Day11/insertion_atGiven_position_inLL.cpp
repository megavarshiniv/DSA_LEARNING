/*
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
// time complexity is O(n)
// space complexity is O(1)
class Solution {
  public:
    Node *insertPos(Node *head, int pos, int val) {
        // code here
        if(pos==1){
            Node* newNode=new Node(val);
            Node* temp=head;
            newNode->next=temp;
            head=newNode;
            return head;
        }
        
        int count=1;
        Node* temp=head;
        while(temp!=NULL && count<pos-1){
            temp=temp->next;
            count++;
        }
        
        // if we are reaching here it means temp now points to (i-1)node
        // create a new node with val
        Node* newNode= new Node(val);
        
        if(temp!= NULL){
            newNode->next=temp->next;
            temp->next=newNode;
        }
        return head;
    }
};