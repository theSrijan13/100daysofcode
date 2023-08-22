class Solution{
    public:
    int findelement(Node* head){
        int max = INT_MIN;
        
        while(head!=NULL){
            if(max < head ->data){
                max=head->data;
                head = head->next;
            }
        }
        return max;
    }
    int findelement1(Node* head){
        int Min = INT_MAX;
        while(head != NULL){
            if(min > head->data){
                min = head->data;
                head=head->next;
            }
        }
        return min;
    }
    int delALT(Node *head){
        // check head is null or not
        if(head==NULL){
            return;
        }
        // create 2 pointer prev and node
        Node* prev = head;
        Node* node = head->next;
        while(prev != NULL && Node != NULL){
            // change the link
            prev->next = node->next;
            delete(node);
            prev=prev->next;
            if(prev!=NULL){
                node=prev->next;
            }
        }
        return head;
    }
}