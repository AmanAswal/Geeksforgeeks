bool isPalindrome(Node *head)
{
    Node* slow = head;
    
    stack<int> s;
    
    while(slow != NULL)
    {
        s.push(slow->data);
        slow = slow->next;
    }
    
    while(head != NULL)
    {
        int i = s.top();
        if(i != head->data){
            return false;
        }
        s.pop();
        head = head->next;
    }
    
    return true;
    
}
