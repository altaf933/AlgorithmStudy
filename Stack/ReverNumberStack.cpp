#include<iostream>
#define MAX 1000
using namespace std;
class Stack {
    int top = 0;
    int array[MAX];
 public:
    void push(int);
    int pop();
    bool isFull();
    bool isEmpty();
    void iterate();
};
void Stack::push(int a) {
 if (!isFull()) {
  array[top] = a;
  top = top + 1;
  }
}
int Stack::pop(){
 if (!isEmpty()) {
     top--;
    return array[top];
  }
 return array[top];
 }
bool Stack::isFull(){
  if (top < MAX){
      return false;
  }
  return true;
}

bool Stack::isEmpty(){
  if (top <=  0){
      return true;
  }
  return false;
}
void Stack::iterate(){
  while(!isEmpty()){
   top = top - 1;
   cout<<array[top]; 
  }

}
int main(){
 Stack stack;
 int decimal = 15;
 while(decimal > 0) {
   int modulo = decimal % 2;
   stack.push(modulo);
   decimal = decimal / 2;
 }
 stack.iterate();
 return 0;
} 



