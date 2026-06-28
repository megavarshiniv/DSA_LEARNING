/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */
// time complexity is O(n)
// space complexity is O(1)
class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        Node* temp=head;
        int len=0;
        while (temp!=NULL) {
            len++;
            temp = temp->next;
        }
        if (k>len) {
            return -1; 
        }
        temp = head;
        int f=len-k+1;
        int cnt=1;
        while (cnt<f) {
            temp=temp->next;
            cnt++;
        }
        return temp->data;
    }
};