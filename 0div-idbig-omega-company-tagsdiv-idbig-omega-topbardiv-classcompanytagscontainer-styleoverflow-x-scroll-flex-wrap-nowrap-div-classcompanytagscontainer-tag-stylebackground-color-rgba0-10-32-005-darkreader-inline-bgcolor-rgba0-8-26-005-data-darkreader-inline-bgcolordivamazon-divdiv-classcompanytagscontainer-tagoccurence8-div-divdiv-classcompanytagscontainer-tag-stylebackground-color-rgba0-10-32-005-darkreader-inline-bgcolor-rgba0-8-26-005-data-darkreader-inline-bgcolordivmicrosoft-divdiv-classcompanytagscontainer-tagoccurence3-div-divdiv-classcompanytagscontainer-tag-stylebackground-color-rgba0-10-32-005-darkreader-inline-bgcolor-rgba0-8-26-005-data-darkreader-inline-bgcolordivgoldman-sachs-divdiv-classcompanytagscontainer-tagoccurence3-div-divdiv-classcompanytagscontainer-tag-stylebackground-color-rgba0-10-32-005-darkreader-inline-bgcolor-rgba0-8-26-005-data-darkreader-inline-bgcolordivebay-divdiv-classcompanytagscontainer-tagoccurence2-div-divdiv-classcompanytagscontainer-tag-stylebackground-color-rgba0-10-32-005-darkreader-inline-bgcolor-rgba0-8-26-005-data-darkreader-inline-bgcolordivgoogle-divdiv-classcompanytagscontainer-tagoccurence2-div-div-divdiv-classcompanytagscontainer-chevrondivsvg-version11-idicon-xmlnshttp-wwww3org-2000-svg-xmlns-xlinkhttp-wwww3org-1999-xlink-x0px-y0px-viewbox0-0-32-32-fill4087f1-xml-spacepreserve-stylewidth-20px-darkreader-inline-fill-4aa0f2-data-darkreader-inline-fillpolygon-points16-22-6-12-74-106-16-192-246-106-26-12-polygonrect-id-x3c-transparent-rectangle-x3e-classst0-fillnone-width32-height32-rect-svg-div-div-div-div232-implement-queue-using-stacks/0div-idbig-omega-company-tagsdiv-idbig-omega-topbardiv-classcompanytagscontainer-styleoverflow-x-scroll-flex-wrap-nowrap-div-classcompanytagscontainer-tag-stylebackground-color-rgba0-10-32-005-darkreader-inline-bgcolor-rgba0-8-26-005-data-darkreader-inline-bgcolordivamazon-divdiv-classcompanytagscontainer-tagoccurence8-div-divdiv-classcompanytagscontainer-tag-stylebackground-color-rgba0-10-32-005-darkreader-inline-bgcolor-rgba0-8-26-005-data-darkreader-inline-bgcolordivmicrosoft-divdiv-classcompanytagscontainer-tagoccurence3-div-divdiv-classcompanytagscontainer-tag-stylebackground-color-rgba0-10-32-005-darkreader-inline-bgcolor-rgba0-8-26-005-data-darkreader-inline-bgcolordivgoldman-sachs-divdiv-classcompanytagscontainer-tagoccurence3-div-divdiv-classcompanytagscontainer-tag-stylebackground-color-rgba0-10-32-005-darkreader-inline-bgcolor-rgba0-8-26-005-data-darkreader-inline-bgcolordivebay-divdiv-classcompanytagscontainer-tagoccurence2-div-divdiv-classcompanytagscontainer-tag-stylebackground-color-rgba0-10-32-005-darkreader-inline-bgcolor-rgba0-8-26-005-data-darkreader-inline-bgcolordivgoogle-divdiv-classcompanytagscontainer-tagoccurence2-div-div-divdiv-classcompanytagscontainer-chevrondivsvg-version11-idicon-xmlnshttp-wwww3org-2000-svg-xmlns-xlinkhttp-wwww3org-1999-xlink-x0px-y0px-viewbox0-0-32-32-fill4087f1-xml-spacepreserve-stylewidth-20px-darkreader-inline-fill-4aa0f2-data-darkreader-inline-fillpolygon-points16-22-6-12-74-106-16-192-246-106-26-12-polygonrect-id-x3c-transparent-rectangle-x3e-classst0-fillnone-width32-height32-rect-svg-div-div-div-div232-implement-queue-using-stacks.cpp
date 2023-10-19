class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    
    MyQueue() {     
    }
       
    void push(int x) {
       input.push(x);
    }
    
    int pop() {  
        if(output.size()!=0){
           // return output.pop();
            int top = output.top();
            output.pop();
            return top;
 
        }else{
            while(input.size()!=0){
               output.push(input.top());
               input.pop();
            }
           // return output.pop();
            int top=output.top();
            output.pop();
            return top;
        }
    }
    
    int peek() {
        if(output.size()!=0){
           return output.top();
        }else{
            while(input.size()!=0){
                output.push(input.top());
                input.pop();
            }
           return output.top();
        }
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */