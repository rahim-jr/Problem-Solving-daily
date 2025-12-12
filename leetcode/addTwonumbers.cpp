// Problem Link : https://leetcode.com/problems/add-two-numbers/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //This is the temporary linkedList to store the sum of the give two LinkedList. 
        ListNode *dummy = new ListNode(0) ;
        //Address for the Next Node 
        ListNode *root = dummy ;
        int carry = 0 ;
        while(l1 != nullptr || l2 != nullptr) {
            /// Checking All the way down... 
            int numberOne = (l1 != nullptr) ? l1 -> val : 0 ; 
            int numberTwo = (l2 != nullptr) ? l2 -> val : 0 ;

            //Sum Logic 
            int sum = numberOne + numberTwo + carry ; 
            //Carry logic for Decimal based numbering system. 
            carry = sum / 10 ;
            sum %= 10 ;

            root -> next = new ListNode (sum) ;
            root = root -> next ;

            if(l1) l1 = l1 -> next ;
            if(l2) l2 = l2 -> next ;
        }

        if(carry > 0) {
            root -> next = new ListNode (carry) ;
        }

        return dummy -> next ;
    }
};