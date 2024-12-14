// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define MAX_STACK 10;

struct Stack{
    int top;
    int data[10];
    
    void init(){
        top = -1;
    }
    
    bool isFull(){
        return top == MAX_STACK - 1;
    }
    
    bool isEmpty(){
        return top == -1;
    }
    
    void push(int newData){
        if(isFull()){
            cout<<"Stack sudah penuh";
            return;
        }
        
        top++;
        data[top] = newData;
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"Stack sudah kosong"<<endl;
            return;
        }
        
        cout<<"Data yang dikeluarkan: "<<data[top]<<endl;
        top--;
    }
    
    void print(){
        cout<<"Isi stack:"<<endl;
        for(int i = top; i>=0; i--){
            cout<<data[i];
            cout<<endl;
        }
    }
};

int main() {
    // Write C++ code here
    Stack stack;
    stack.init();
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.print();
    
    stack.pop();
    stack.print();
    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}