#include <iostream>
#include <string>

int main() {
    bool A = true,
         B = true,
         C = false,
         D = true;

    bool and1 = A && B; //true
    bool and2 = A && B && C && D; //false
    
    bool or1 = C || D; //true
    bool or2 = A || D || B; //true

    bool and_or1 = A && B || C; //true
    bool and_or2 = C || (A && B && C && D); //false
}