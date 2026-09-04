#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int Max(const std::vector<int>& a)
{
    int max = a[0];
    for (std::size_t i = 0; i < a.size(); i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

bool Descending(int a,int b)
{
    return a > b;
}

int Threshold(int a, const std::vector<int>& b)
{
    int count = 0;
    for (std::size_t i = 0; i < b.size(); i++)
    {
        if(b[i] >= a)
            count ++;
    }
    return count;
}

int main()
{
    std::string name;
    std::vector<int>readings;
    int n;
    int x;
    int threshold;

    std::cout << "Sensor name: ";
    std::cin >> name;
    std::cout << "Number of readings: ";
    std::cin >> n;

    std::cout << "Readings: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        readings.push_back(x);
    }

    std::cout << "Threshold: ";
    std::cin >> threshold;

    std::cout << "Sensor: " << name << '\n';

    std::sort(readings.begin(), readings.end(), Descending);
    std::cout << "Sorted readings: ";
    for (std::size_t i = 0; i < readings.size(); i++)
    {
        std::cout << readings[i] << " ";
    }
    
    std::cout << "\n";
    std::cout << "Maximum: " << Max(readings) << '\n';
    std::cout << "Above or equal to threshold: " << Threshold(threshold,readings) << '\n';

    return 0;
}