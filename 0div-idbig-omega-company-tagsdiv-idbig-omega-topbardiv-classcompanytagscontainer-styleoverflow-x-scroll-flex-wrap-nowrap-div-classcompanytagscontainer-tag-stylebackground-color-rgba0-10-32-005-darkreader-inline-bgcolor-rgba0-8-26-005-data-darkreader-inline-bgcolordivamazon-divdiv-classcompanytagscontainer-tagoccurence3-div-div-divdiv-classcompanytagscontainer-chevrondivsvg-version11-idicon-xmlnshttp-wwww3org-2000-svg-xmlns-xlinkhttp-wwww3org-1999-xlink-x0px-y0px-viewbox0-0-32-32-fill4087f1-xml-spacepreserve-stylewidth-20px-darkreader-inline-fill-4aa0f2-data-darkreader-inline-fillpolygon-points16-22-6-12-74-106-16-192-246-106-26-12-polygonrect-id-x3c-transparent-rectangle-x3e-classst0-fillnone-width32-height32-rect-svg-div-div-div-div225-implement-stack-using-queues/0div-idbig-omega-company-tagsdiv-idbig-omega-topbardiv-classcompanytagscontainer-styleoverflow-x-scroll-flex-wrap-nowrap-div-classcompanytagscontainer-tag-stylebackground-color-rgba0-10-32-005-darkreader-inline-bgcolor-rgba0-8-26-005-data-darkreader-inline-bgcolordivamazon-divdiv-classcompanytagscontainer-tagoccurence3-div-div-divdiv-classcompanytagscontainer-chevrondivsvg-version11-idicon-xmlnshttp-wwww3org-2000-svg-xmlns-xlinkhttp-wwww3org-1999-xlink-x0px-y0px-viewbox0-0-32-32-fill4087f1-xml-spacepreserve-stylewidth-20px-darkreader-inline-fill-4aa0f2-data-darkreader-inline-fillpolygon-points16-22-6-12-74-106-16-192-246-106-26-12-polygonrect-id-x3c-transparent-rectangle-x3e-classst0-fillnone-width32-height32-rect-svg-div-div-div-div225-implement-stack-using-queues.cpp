class MyStack {
public:
    queue<int> queue1;
    queue<int> queue2;
    MyStack() {
        
    }
    
    void push(int x) {
        queue1.push(x);
        while(queue2.empty()==false){
            queue1.push(queue2.front());
            queue2.pop();
        }
        swap(queue1,queue2);
    }
    
    int pop() {
        int ans;
        if(queue2.empty()){
            ans=-1;
        }
        else{
            ans=queue2.front();
            queue2.pop();
        }
        return ans;
    }
    
    int top() {
        int ans=queue2.front();
        return ans;
    }
    
    bool empty() {
        if(queue2.empty()==true)
            return true;
        else return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */