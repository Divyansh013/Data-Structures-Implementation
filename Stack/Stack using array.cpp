struct mystack{
    int *arr;
    int cap;
    int top;
    mystack(int x){
        cap=x;
        arr= new int[cap];
        top=-1;
        // initially -1 as we will increase size everytime we push
    }
    void push(int data){
        top++;
        if(top==cap){
            return INT_MAX; //overflow case
        }
        arr[top]=data;
    }
    int pop(){
        if(top==-1){
            return INT_MAX; //overflow case
        }
        int ans=arr[top];
        top--;
        return ans;
    }
    int peek(){
        if(top==-1) return INT_MAX; //overflow case
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isempty(){
        return top==-1
    }
}
// we have take care of some corner cases like when we are pushing more elements then capacity or we are popping when there is nothing.