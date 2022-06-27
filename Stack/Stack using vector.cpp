struct mystack{
    vector<int>v;
    void push(int x){
        v.push_back(x);  
    }
    int pop(){
        int ans= v.back();
        v.pop_back();
        return ans;
    }
    int size(){
        return v.size();
    }
    int peek(){
        return v.back();
    }
    bool isempty(){
        return v.empty();
    }
}