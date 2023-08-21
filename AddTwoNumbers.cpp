/** Sharik Mahmood - Learning Outcome: mainly using and iterating through linked list, the rest was mainly basic math and simple algortihms.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* Head = new ListNode(0); //will hold result linked list, set first i to 0
        ListNode* tail = Head; //will keep track of last node in result list
        int carry = 0; //this will hold the carry value during our addition
        int digit1 = 0, digit2 = 0; // to keep track of digits from the linked lists
        int sum = 0;    // sum of digits
        int digit;      //the singular digit of the sum without the carry 

        while(l1 != nullptr || l2 != nullptr || carry != 0) //while we have a value in our list or there is a carry
        {
            if(l1 != nullptr) digit1 = l1->val; //if there is a value in our ll we put it in our variable
                else digit1 = 0; //else we just set it to 0
            
            if(l2 != nullptr) digit2 = l2->val; //if there is a value in our ll we put it in our variable
                else digit2 = 0;//else we just set it to 0

            sum = digit1 + digit2 + carry; //we add up our numbers
            digit = sum % 10;   //the first part is put in a variable to be put in our ll, we get it by using mod 10
            carry = sum/10; //then we get the carry of our sum and update the carry variable

            ListNode* newNode = new ListNode(digit); //creates new node with our digit inside of it as val
            tail->next = newNode;   //tail points to the new node, this tail is part of Head nodes body
            tail = tail->next;      //new node becomes tail

            if(l1!=nullptr) l1 = l1->next; //if l1 is not null we go to next pointer
            if(l2!=nullptr) l2 = l2->next; //if l2 is not null we go to next pointer
        }
         
        ListNode* answer = Head->next;// the first i is always 0 so we pass the next node that contains the rest of our answer
        delete Head; //and we delete this node to save space
        return answer;  // and return this node as our answer with the correct numbers
    }
};
