#include <iostream>

int main()
{
    // Syntax: TYPE ArrayName[size];
    int arr1[10];  // declaration - array with 10 elements - fixed sized!
    float arr2[3]; // another example

    arr1[0] = 5;  // putting value 5 in first position of array;
    arr1[4] = 10; // putting value 10 in fourth position of array;

    arr2[3] = 11; // arr2 only supports 3 elements (pos 0, pos 1 or pos 2)! This will fail

    return 0;
}