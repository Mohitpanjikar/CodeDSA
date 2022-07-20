/*
Palindrome Linked List - Given the head of a singly linked list, return true if it is a palindrome.
https://leetcode.com/problems/palindrome-linked-list/
*/

class Solution {
private:
    ListNode* getmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast != NULL && fast->next !=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return true;
        
        //step 1 finding the middle element :
        ListNode* middle = getmid(head);
        
        //step 2 reverse the linkedlist 
        ListNode* temp = middle->next;
        middle->next=reverse(temp);
        
        //step3 compare both the half
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        while(head2 != NULL){
            if(head1->val !=head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        //step 4 reverse the linkedlist bcoz i dont want to change in the orginal linkedlist
        temp = middle->next;
        middle->next=reverse(temp);
        
        return true;

    }
};