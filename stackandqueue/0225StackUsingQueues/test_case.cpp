#include "s1.hpp"
//#include "s2.hpp"

int main()
{
    MyStack myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.top();   // return 2
    myStack.pop();   // return 2
    myStack.empty(); // return False
}
