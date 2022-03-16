#include <iostream>
#include <cmath>

void calculateByFormula(float, float, float);
void calculateStepByStep(float, float, float, float);

int main()
{
    float initialValue = 1000.00f;         // initial value
    float interestRate = 50.0f;            // in percent: example = 100 for 100%
    float time = 12.0f;                    // days, months, or years... whatever
    float recurrencyContribution = 10.00f; // contribution
    int calculationType = 1;               // 0 = Calculate By Formula, 1 = Calculate Step by Step

    std::cout.precision(2);
    std::cout << "Initial Value: " << std::fixed << initialValue << std::endl;
    std::cout << "Interest Rate: " << std::fixed << interestRate << "%" << std::endl;
    std::cout << "Time: " << std::fixed << time << " (Days, Months or Years)" << std::endl;

    if (calculationType == 0) {
        calculateByFormula(initialValue, interestRate, time);
        std::cout << std::endl;
    }

    if (calculationType == 1) {
        std::cout << "Contribution: " << std::fixed << recurrencyContribution << std::endl;
        std::cout << std::endl;
        calculateStepByStep(initialValue, interestRate, time, recurrencyContribution);
    }

    return 0;
}

void calculateByFormula(float initialValue, float interestRate, float time)
{
    double finalValue = (initialValue * pow((1.0f + (interestRate / 100.00f)), time));

    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "Calculated Value By Formula: " << std::fixed << finalValue << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    return;
}

void calculateStepByStep(float initialValue, float interestRate, float time, float recurrencyContribution)
{
    float amount = initialValue;
    float yield = 0.0f;
    float rate = interestRate / 100.0F;

    for (int i = 1; i <= time; ++i)
    {
        yield = amount * rate;
        amount += yield;
        amount += recurrencyContribution;
        std::cout << "Iteration " << i << std::endl;
        std::cout << "Amount = " << std::fixed << amount << std::endl;
        std::cout << "Yield = " << std::fixed << yield << std::endl;
        std::cout << "Amount + Rate = " << std::fixed << amount << std::endl;
        std::cout << std::endl;
    }

    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "Calculated Value Step by Step: " << std::fixed << amount << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;

    return;
}