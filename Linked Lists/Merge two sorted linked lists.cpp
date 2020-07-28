Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    Node* result=NULL;
    Node* s=NULL;
    
    if(head_A == NULL)
        return head_B;
    if(head_B == NULL)
        return head_A;
        
    if(head_A && head_B)
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
    result = s;
    
    while(head_A && head_B)
    {
        if(head_A->data <= head_B->data){
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
    if(head_A == NULL) s->next = head_B;
    if(head_B == NULL) s->next = head_A;
    
    return result;
