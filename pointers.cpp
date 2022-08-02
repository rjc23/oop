#include <iostream>

using namespace std;

int main(void) {

    // How do we create a pointer?
    int *num;

    // A pointer is simply a variable that lives on the STACK
    // It can point to memory on the stack or the heap

    // Example of num pointing to memory on the heap. new is similar to malloc in C
    num = new int;

    // point to memory on the stack
    int a = 8;
    num = &a;

    // How can we print the value that the pointer points to? Use the * operator
    cout << *num << endl;

    return 0;
}