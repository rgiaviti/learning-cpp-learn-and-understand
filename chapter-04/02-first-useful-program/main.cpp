#include <iostream>

int main()
{
    int n1, n2, n3, n4, n5;
    std::cout << "Enter five integers separated by space: ";
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int sum = n1 + n2 + n3 + n4 + n5;
    float average = sum / 5.f; // be careful, if divide by a int, we get int result (maybe be lose precision)
    std::cout << "Sum is " << sum << std::endl;
    std::cout << "Average is " << average << std::endl;
    return 0;
}