#include <iostream>



int main() {
    auto name = "Hello World"; // the auto keyword was introduced in C++11
    std::cout << name << " - " << typeid(name).name() << std::endl; //type of the var should be PKc
    
    // Is a good practice declaring the type instead usin the auto keyword 
    //----------------------------------------------------

    auto x = 10.5;
    auto y = 10;
    std::cout << typeid(x).name() << std::endl;
    std::cout << typeid(y).name() << std::endl;

    int var1 = 10;
    int var2 (10); //C++11
    int var3 {20}; //C++11
    std::cout << typeid(var1).name() << std::endl;
    std::cout << typeid(var2).name() << std::endl;
    std::cout << typeid(var3).name() << std::endl;

    return 0;
}
