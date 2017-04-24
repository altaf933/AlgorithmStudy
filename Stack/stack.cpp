//clang 3.8.0

#include <iostream>
#define MAX 1000

class Stack{
        
   int top=0;
   public:
     int a[MAX];
     bool push(int x);
     int pop();
     bool isEmpty();
};

bool Stack:: push(int x){
    
    if(top > MAX){
        std::cout<<"Stack overflow error";
        return false;
    }else{
        
        a[++top] = x;
         
        return true;
    }      
}

int Stack:: pop(){
    if(top < 0){
        std::cout<<"Stack underflow error";
        return -1;
    }
    else{
        //top--;
        return a[top--];
    }
    
    
}
bool Stack:: isEmpty(){
    
    if(top < 0){
        return true;
    }
}

int main()
{
    
    struct Stack stack;
    stack.push(10);
    stack.push(11);
    stack.push(12);
    stack.push(13);
    
    std::cout << stack.pop();
    std::cout << stack.pop();
   // std::cout << stack.pop();
    
    
}