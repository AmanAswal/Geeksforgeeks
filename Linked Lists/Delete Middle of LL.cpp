// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    if(head == NULL){
        return NULL;
    }
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    
    struct Node* fast = head;
    struct Node* slow = head;
    struct Node* prev;      
    
    while(fast && fast->next){
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    prev->next = slow->next;
    delete slow;
    return head;
}
