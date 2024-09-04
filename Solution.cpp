struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    struct Node* reverseList(struct Node* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        Node* prev=NULL;
        Node* curr=head;
        Node* next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
};
