#include <iostream>
#include <vector>

int findMax(const std::vector<int>& nums)
{
    int max = nums[0];
    for (std::size_t i = 1; i < nums.size(); i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}

int main()
{
    int n;
    int x;
    int max;
    std::vector<int>nums;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> x;
        nums.push_back(x);
    }
    max = findMax(nums);
    std::cout << max << '\n';

    return 0;
}