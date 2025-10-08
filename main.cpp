#include <iostream>
#include "stack_template.h"

int main()
{
    Stack<char> stack(10);
    stack.push('a');
    stack.pop();
   
    return 0;
}
