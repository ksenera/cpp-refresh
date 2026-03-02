#include <iostream>
int main() { 
    std::cout << "Stack ready" << std::endl;
    int capacity = 10;
    std::cout << "Capacity: " << capacity << std::endl;
    return 0;
}

// printing to the terminal Stack ready and Capacity: 10
// if i change capacity to 0 prints our Capacity: 0
// removal of endl results in nothing being printed error 
// what registers change when capacity = 10; executes stack pointer and program counter
// capacity should live in memory in x0 to x30 general purpose
// since the value 10 will execute on stack 
// program counter points to line 4 and then when line 4 runs it points to next std
// not sure about the flags but it keep what was executed was the result Capacity: 10 