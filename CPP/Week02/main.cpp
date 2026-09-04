#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
#include <queue>
#include <set>
#include <map>

int Max(const std::vector<int>& a)
{
    int max = a[0];
    for(std::size_t i = 0; i < a.size(); i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int Min(const std::vector<int>& a)
{
    int min = a[0];
    for(std::size_t i = 0; i < a.size(); i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}

double Average(const std::vector<int>& a)
{
    int sum = 0;
    for(std::size_t i = 0; i < a.size(); i++)
    {
        sum += a[i];
    }
    return static_cast<double>(sum) / a.size();

}
void SortReadings(std::vector<int>& a)
{
    std::sort(a.begin(),a.end());
}

bool Descending(int a,int b)
{
    return a>b;
}

void SortReadingsDescending(std::vector<int>& a)
{
    std::sort(a.begin(),a.end(),Descending);
}

int main()
{
    std::string name;
    std::vector<int>readings;
    std::stack<int>reading_stack;
    std::queue<int>reading_queue;

    int n;
    int x;
    int sensor_id;
    int max_reading;
    std::cout << "===== Sensor Data Recorder =====" << '\n';
    std::cout << "Sensor name: ";
    std::cin >> name;
    std::cout << "Sensor ID: ";
    std::cin >> sensor_id;
    std::cout << "How many readings: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Reading " << i+1 << ":";
        std::cin >> x;
        readings.push_back(x);
    }
    max_reading = Max(readings);
    std::pair<int,int>sensor_data = {sensor_id,max_reading};

    std::cout << "Sensor: " << name << '\n';
    std::cout << "Sensor ID: " << sensor_data.first << '\n';
    std::cout << "Readings: " << '\n';
    for (std::size_t i = 0; i < readings.size();i++)
    {
        std::cout << readings[i] << '\n';
    }
    std::cout << "Total readings: " << readings.size() << '\n';
    std::cout << "Maximum reading: " << sensor_data.second << '\n';
    std::cout << "Minimum reading: " << Min(readings) << '\n';
    std::cout << "Average reading: " << Average(readings) << '\n';
    SortReadings(readings);
    std::cout << "sortreadings: " << '\n';
    for (std::size_t i = 0; i < readings.size(); i++)
    {
        std::cout << readings[i] << '\n';
        reading_stack.push(readings[i]);
        reading_queue.push(readings[i]);
    }
    std::cout << "descending sortreadings: " << '\n';
    while (!(reading_stack.empty()))
    {
        std::cout << reading_stack.top() << '\n';
        reading_stack.pop();
    }
    std::cout << "sortreadings: " << '\n';
    while (!(reading_queue.empty()))
    {
        std::cout << reading_queue.front() << '\n';
        reading_queue.pop();
    }

    std::set<int>numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);

    std::map<int,int>sensor_readings;
    sensor_readings[101] = 22;
    sensor_readings[102] = 18;
    sensor_readings[103] = 25;

    std::cout << sensor_readings[101] << '\n';
    std::cout << numbers.count(20) << '\n';
    std::cout << numbers.size() << '\n';
    std::cout << sensor_readings[102] << '\n';

    return 0;
}
