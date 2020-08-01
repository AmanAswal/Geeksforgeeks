Node* reverse(Node *head) 
// this function reverses the linked list
{
    Node * prev = NULL;
    Node * current = head;
    Node * next;
    
    while (current != NULL) 
    { 
        next = current->next;     // storing next node
        current->next = prev;     // linking current node to previous
        prev = current;           // updating prev
        current = next;           // updating current
    }
    
    return prev; 
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    first = reverse(first);              // reversing lists
    second = reverse(second);            // to simplify addition
    
    Node *sum=NULL;
    int carry=0;
    
    while( first!=NULL || second!=NULL || carry!=0 )
    {
        int newVal = carry;
        if(first) newVal += first->data;
        if(second) newVal += second->data;
        // newly value for sumList is sum of carry and respective
        // digits in the 2 lists
        
        carry = newVal/10;               // updating carry
        newVal = newVal%10;              // making sure newVal is <10
        
        Node* newNode = new Node(newVal);
        newNode->next = sum;             // appending newVal node
        sum = newNode;
        
        if(first) first = first->next;     // moving to next node
        if(second) second = second->next;
    }
    
    return sum;
}



// when input is in reverse order
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = NULL; // making a pointer
        int carry=0;
        
        while(l1!=NULL || l2!=NULL || carry!=NULL)
        {
            int newValue=carry; // assign value of carry to newValue node
            
            if(l1)
                newValue += l1->val;    // add data of L1 to the newValue
            if(l2)
                newValue += l2->val;    // add data of L2 to the newValue
            
            carry = newValue/10;    // updating carry
            newValue = newValue%10; // making sure newVal is < 10
            
            ListNode * newNode = new ListNode(newValue);    // making newNode with value of newValue

            if(sum == NULL)     // appending newVal node
                sum = newNode;
            else{
                ListNode* temp = sum;   // insert newNode at the end 
                while(temp->next!=NULL){
                     temp = temp->next;
                }
                   
                temp->next = newNode;
            }
            
            if(l1)
                l1 = l1->next;      // moving to next node in L1
            if(l2)
                l2 = l2->next;      // moving to next node in L2
        }
        return sum; // return the head pointer of new Linked List containing Sum
    }
};
