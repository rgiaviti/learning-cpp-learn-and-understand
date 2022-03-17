#include <iostream>

int main()
{
    int arra1[50] = {1, 2, 7, 5, 1}; // initializing the array
    int arraySize = sizeof(arra1)/sizeof(*arra1);
    std::cout << "The Array Size is: " << arraySize << std::endl; // size of array C-Style
    
    for (int i = 0; i < arraySize; ++i) {
        std::cout << arra1[i] << std::endl;
    }

    return 0;
    
}