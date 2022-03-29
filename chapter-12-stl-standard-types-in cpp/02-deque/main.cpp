#include <iostream>
#include <deque>

int main()
{
    std::deque<int> dq1;
    std::deque<int> dq2(3, 7);

    dq1.push_back(5);
    dq1.push_front(2);
    int el1 = dq2.at(0);

    for (int i = 0; i < dq1.size(); ++i)
    {
        std::cout << dq1.at(i) << " ";
    }
    std::cout << std::endl;

    dq2.push_back(2);
    dq2.push_back(10);
    dq2.push_front(7);

    for (int i : dq2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}