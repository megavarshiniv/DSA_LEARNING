#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void printLL(Node *head){
    Node * temp=head;
    while(temp->next !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int calculateLength(Node *head){
    Node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
Node* takeInput(){
    int data;
    cout<< "Enter data: "<<endl;
    cin>>data;

    Node* head=NULL;
    while(data!=-1){
        Node* newNode = new Node(data);
        if(head==NULL){
            head= newNode;
        }else{
            Node* temp= head;
            while(temp-> next!=NULL){
                temp =temp-> next;
            }
            temp->next=new Node;
        }
        cout<< " Enter data again:"<<endl;
        cin>>data;
    }
    return head;
}
Node*takeInputBetter(){
    int data;
    cout<<"Enter data:"<<endl;
    cin>>data;

    Node* head=nullptr;
    Node* tail=nullptr;
    
    while(data!=-1){
        Node newNode = new Node(data);
        if(head==nullptr){
            head= newNode;
            tail = newNode;
        }else{
            tail->next=newNode;
            tail=newNode; // ypdate the tail
        }
        cout<<"Enter data again:"<<endl;
        cin>>data;
    }
    return head;
}
Node* printINode(Node* head,int i){
    int count=0;
    Node* temp=head;
    while(temp!= nullptr){
        if(count==i){
            cout<< temp->data;
            return;
        }
        count++;
        temp=temp->next;
    }
    cout<<"Index "<< i<< "is out of bound"<<endl;
}


int main(){
    //staticallly 
  Node n1(10);
  Node n2(20);
  Node n3(30);
  Node n4(40);
  Node n5(50);

  Node *head=&n1;
  n1.next=&n2;
  n2.next=&n3;
  n3.next=&n4;
  n4.next=&n5;
  n5.next=NULL;
  printLL(head);
   
    cout << endl;
    int length = calculateLength(head);
    cout << "length of linked list is: " << length << endl;

    Node* updatedHead = takeInput();
    printLL(updatedHead);

    Node* betterHead= takeInputBetter();
    printLL(betterHead);
    
    Node* 
}