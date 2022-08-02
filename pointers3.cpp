#include <iostream>

using namespace std;

void swapTwo(int *numOne, int *numTwo) {
    int temp = *numOne;
    *numOne = *numTwo;
    *numTwo = temp;
}

int main(void) {
    int a = 5;
    int b = 6;

    swapTwo(&a, &b);
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}