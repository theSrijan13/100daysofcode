class Solution{
    public:
    // insertion at starting

    void push(Node** head,int new_data){
        Node* new_node = new Node();
        new_node->data=new_data;
        new_node->next= (*head);
        (*head)=new_node;
    }
    // insertion at end

    void back(Node* head,int new_data){
        Node* new_node = new Node()
        Node* last = (*head);
        new_node->data = new_data;
        new_node->next = NULL;
        
        // IF LINKEDLIST IS EMPTY THEN MAKE NEW NODE AS HEAD
        if(*head == NULL){
            *head = new_node;
            return;
        }
        while(last->next!=NULL){
            last=last->next;
        }
        // change the next of last node;
        last->next=new_node;
        return;
    }
    // insertion between a node;
    void InsertafterNode(Node* prev_node,int data){
        // check prev node is null or not
        if(prev_node == NULL){
            return;
        }
        // allocate new node
        Node* new_node = new Node();
        new_node-> data = new_data;
        new_node -> next = prev_node->next;
        prev_node ->next = new_node;
    }
};
int main(){
    
}