struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
}
struct mystack{
    Node *head;
    int cap;
    mystack(){
        head=NULL;
        cap=0;
    }
    void push(int x){
        Node *temp=new Node(x);
        temp->next=NULL;
        head=temp;
        cap++;
    }
    int pop(){
        if(head==NULL) return INT_MAX;
        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp); // doing this to prevent memory leakage
        cap--;
        return res;
    }
    int size(){
        return cap;
    }
    int peek(){
        if(head==NULL) return INT_MAX;
        return head->data;
    }
    bool isempty(){
        return (head==NULL);
    }
}