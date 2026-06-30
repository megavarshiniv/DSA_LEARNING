
//time complexity - O(M+N)
//space complexity - O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int calculateLen(ListNode* head){
        ListNode* temp=head;
        int cnt=0;
        while(temp!=nullptr){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* findIntersect(ListNode* list1,ListNode* list2,int diff){
        while(list1!=nullptr&&diff>0){
            list1=list1->next;
            diff--;
        }
        while(list1!=nullptr&&list2!=nullptr){
            if(list1==list2){
                return list1;
            }
            list1=list1->next;
            list2=list2->next;
        }
        return 0;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=calculateLen(headA);
        int len2=calculateLen(headB);
        if(len1>=len2){
           return findIntersect(headA,headB,len1-len2);
        }else{
            return findIntersect(headB,headA,len2-len1);
        }
        return 0;
    }
};