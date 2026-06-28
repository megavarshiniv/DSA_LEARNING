/* Node Structure
class Node {
  public:
    int data;
    Node* next;
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
    Node *deleteAtPosition(Node *head, int pos) {
        // code here
        if(head==nullptr)
           return nullptr;
        if(pos==1){
            Node* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        Node* temp=head;
        int count=1;
        while(temp!=NULL && count<pos-1){
            temp=temp->next;
            count++;
        }
        if(temp!=nullptr && temp->next!=nullptr){
            Node* nodeToDelete=temp->next;
            temp->next=nodeToDelete->next;
            delete nodeToDelete;
        }
        return head;
    }
};