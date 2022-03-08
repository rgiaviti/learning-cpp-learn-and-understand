#include <iostream>
#include <cmath>

float calculate(float, float, float);
void calculateEveryStep(float, float, float, float);

int main() {
    calculateEveryStep(100.f, 0.1, 12.f, 10.f);
    return 0;
}

float calculate(float initialValue, float interestRate, float time) {
    double finalValue = (initialValue) * pow((1 + (interestRate)), time);
    return trunc(finalValue * 100);
}

void calculateEveryStep(float initialValue, float interestRate, float time, float contribution) {
    float value = initialValue;
    float totalValue = initialValue;
    float yield = 0.f;

    float totalYield = 0.f;
    
    std::cout << "Initial Value: " << value << std::endl;
    std::cout << "Rate: " << interestRate * 100 << "%" << std::endl;
    std::cout << "Time: " << time << std::endl;
    std::cout << "Contribution: " << contribution << std::endl;
    
    for (int i=1; i<=time; i++) {
        std::cout << std::endl;
        std::cout << "Iteraction " << i << std::endl;
        std::cout << "-------------" << std::endl;

        value = value + contribution;
        yield = value * interestRate;
        totalYield = totalYield + yield;
        totalValue = totalValue + contribution;
        value = value + yield;
        
        std::cout << "Yield: " << yield << std::endl;
        std::cout << "Value: " << value << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Total Value Invested: " << totalValue << std::endl;
    std::cout << "Total Yield: " << totalYield << std::endl;
    std::cout << "Final Value: " << value << std::endl;

    return;
}