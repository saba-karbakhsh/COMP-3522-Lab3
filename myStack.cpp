//
// Created by Karen on 9/17/2024.
//

#include "myStack.hpp"

#include <iostream>
#include <ostream>

using namespace std;

MyStack::MyStack() :indexOfTop(-1){}

void MyStack::pop() {
    if(empty()) {
        cout<<"Stack is empty"<<endl;
    }else {
        indexOfTop--;
    }
}

bool MyStack::push(int x) {
    if(full()) {
        cout<<"Stack is full"<<endl;
        return false;
    }else {
        indexOfTop++;
        stack[indexOfTop] = x;
        return true;
    }
}
 int MyStack::top() const {
    if(empty()) {
        cout<<"Stack is empty"<<endl;
        return -1;
    }else {
        return stack[indexOfTop];
    }
}

 bool MyStack::empty() const {
    if(indexOfTop==-1) {
        return true;
    } else {
        return false;
    }
}

 bool MyStack::full() const {
    if(indexOfTop==SIZE-1) {
        return true;
    } else {
        return false;
    }
}
 pmr::string MyStack::print() const {
    int count=0;
    pmr::string str = "";
    while(count<=indexOfTop) {
        str += stack[count] + " ";
        count++;
    }
    cout<<str<<endl;
return str;
}


