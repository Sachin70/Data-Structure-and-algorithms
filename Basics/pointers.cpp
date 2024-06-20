#include <bits/stdc++.h>

using namespace std;


// & -> use to locate the address of a variable
// Pointers are used to store the address of a variable
// * -> value at the address stored in the pointer

void increment(int *ptr) {
    *ptr += 1;
}

int main() {
    int a = 5;
    int *ptr_a = &a; // ptr_a now holds the address of a
    cout << "Address of a: " << ptr_a << endl;
    cout << "Value at the address of a: " << *ptr_a << endl;

    *ptr_a = 10; // change the value at the address stored in ptr_a
    cout << "New value of a: " << a << endl;

    // Double pointer

    int **ptr_ptr_a = &ptr_a; // ptr_ptr_a now holds the address of ptr_a
    cout << "Address of ptr_a: " << ptr_ptr_a << endl;
    cout << "Value at the address of ptr_a: " << *ptr_ptr_a << endl;
    cout << "Value at the address pointed by ptr_ptr_a: " << **ptr_ptr_a << endl;

    **ptr_ptr_a = 20; // change the value at the address pointed by ptr_ptr_a
    cout << "New value of a: " << a << endl;

    // Array of pointers
    // Array is also an array of pointers

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr_arr[5] = {&arr[0], &arr[1], &arr[2], &arr[3], &arr[4]};

    for (int i = 0; i < 5; i++) {
        cout << "Address of arr[" << i << "]: " << ptr_arr[i] << endl;
        cout << "Value at the address of arr[" << i << "]: " << *ptr_arr[i] << endl;
    }

    *ptr_arr[2] = 100; // change the value at the address pointed by ptr_arr[2]
    cout << "New value of arr[2]: " << arr[2] << endl;

    // Pass by reference or pointer
    
    cout << "Value of a before increment: " << a << endl;
    increment(&a); 
    cout << "Value of a after increment: " << a << endl;

    return 0;
}
