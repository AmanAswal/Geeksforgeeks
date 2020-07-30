int findLength(Node *start)
{
	int count = 0;
	Node *p;
	p = start;
	while(p!=NULL)
	{
		count++;
		p = p->next;
	}
	return count;
}
int intersectPoint(Node* head1, Node* head2)
{
    Node* larger;
    Node* smaller;
    int l1, l2, diff, count=0;
    l1 = findLength(head1); // get the lengths of both the linked lists
    l2 = findLength(head2);
    
    diff = l1-l2;   // find the absolute difference
    if(diff < 0){
        diff = diff * -1;
    }
    
    if(l1 > l2){    // find the larger linked list
        larger = head1;
        smaller = head2;
    }
    else{
        larger = head2;
        smaller = head1;
    }
    
    while(count < diff){    // move diff moves on the larger linked list
        if(larger == NULL){
            return -1;
        }
        larger = larger->next;
        count++;
    }
    
    while(larger != NULL && smaller != NULL)   // then move one step each in both linked lists
	{
	    if(larger == smaller){ // if intersection found, return the data
	        return larger->data;
	    }
		larger = larger->next;
		smaller= smaller->next;
	}
	
	return -1; // else return -1.
}
