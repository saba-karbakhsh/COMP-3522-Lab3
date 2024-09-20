//
// Created by Karen on 9/17/2024.
//

#ifndef MYSTACK_HPP
#define MYSTACK_HPP
#include <string>

#endif //MYSTACK_HPP
class MyStack {
static constexpr int SIZE = 10;
private:
    int stack[SIZE];
    int indexOfTop;
public:
    MyStack();
    bool push(int);
    void pop();
    int top() const;
    bool empty() const;
    bool full() const;
    std::pmr::string print() const;
};