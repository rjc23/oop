#include <iostream>

using namespace std;

int main(void) {

    // How can we create a dynamically allocated array?
    // Equivalent to => int *nums = malloc(sizeof(int)*5) from C
    int *nums = new int(5);

    // Set values
    cout << "Array values: ";
    for(int i = 0; i < 5; i++) {
        nums[i] = i*5;
        cout << nums[i] << " ";
    }
    cout << endl;
    
    // How can we access elements with/without array operators
    // Use []
    cout << nums[2] << endl;

    // Why does this also work?
    cout << 2[nums] << endl;

    // Use *
    cout << *(nums + 4) << endl;

    // Why does +4 work?
    // Lets print the pointer value at nums + 0
    cout << nums + 0 << endl;

    // And now at nums[1]
    cout << nums + 1 << endl;

    // Exactly 4 bytes away, this means that + 1 adds the amount of bytes of that data type
    
    return 0;
}