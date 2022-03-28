#include <iostream>
#include <vector>

//vector
int main()
{
    std::vector<int> vec1 (10);
    std::vector<double> vec2 (5);
    std::vector<int> vec3;

    std::vector<int> vec4(3, 7);
    unsigned int vec1_size = vec1.size();
    
    for (int i = 0; i < vec4.size(); ++i)
        std::cout << vec4[i] << " ";

    int e1 = vec1.at(1);
    std::cout << e1 << std::endl;

    bool emp1 = vec1.empty();
    bool emp2 = vec2.empty();

    std::cout << vec3.size() << std::endl;
    vec3.push_back(100);
    std::cout << vec3.size() << std::endl;
    std::cout << vec3[0] << std::endl;

    vec3.pop_back();
    std::cout << vec3.size() << std::endl;

    return 0;
}