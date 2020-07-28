Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    Node* result=NULL;
    Node* s=NULL;
    
    if(head_A == NULL) // if only 2nd linked list exist
        return head_B;
    if(head_B == NULL) // if only 1st linked list exist
        return head_A;
        
    if(head_A && head_B) // if both exist we will write code for finding the position of 's' pointer
    {
        if(head_A ->data <= head_B->data){
            s=head_A;
            head_A = s->next;
        }
        else{
            s=head_B;
            head_B = s->next;
        }
    }
    result = s; // store the new head position to the result pointer which we will finally return
    
    while(head_A && head_B)
    {
        if(head_A->data <= head_B->data){ // we will compare the data of both the linked list and consider the lower one
            s->next = head_A;
            s=head_A;
            head_A = s->next;
        }
        else{
            s->next = head_B;
            s=head_B;
            head_B = s->next;
        }
    }
    if(head_A == NULL) s->next = head_B; // if 1st linked list get exhausted
    if(head_B == NULL) s->next = head_A; // if 2nd linked list get exhausted
    
    return result; // return the head of our merged sorted linked list
