#include <iostream>
#include <vector>

std::size_t findMinIndex(const std::vector<int>& nums, std::size_t start)
{
    std::size_t index = start;
    for(std::size_t i = start + 1; i < nums.size(); i++)
    {
        if(nums[i] < nums[index])
        {
            index = i;
        }
    }
    return index;
}

void selectionSort(std::vector<int>& nums)
{
    std::size_t start;
    std::size_t minIndex;
    for(start = 0; start + 1 < nums.size(); start ++)
    {
        minIndex = findMinIndex(nums,start);
        std::swap(nums[start], nums[minIndex]);
    }
}

int main()
{
    std::vector<int>nums = {5, 2, 4, 1, 3};

    selectionSort(nums);

    for(std::size_t i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i] << ' ';
    }

    return 0;
}