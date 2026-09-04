#include <iostream>
#include <vector>

int main()
{
    int n;
    int x;
    int max;
    std::vector<int>elements;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        elements.push_back(x);
    }
    max = elements[0];
    for(std::size_t i = 1; i < elements.size(); i++)
    {
        if(elements[i] > max)
        {
            max = elements[i];
        }
    }
    std::cout << max << '\n';


    return 0;
}