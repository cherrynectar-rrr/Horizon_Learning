#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& nums,int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while(left <= right)
    {
        int mid = (right + left)/2;

        if(nums[mid] == target)
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int index;
    int target;
    std::cin >> target;
    std::vector<int>nums = {1, 3, 5, 7, 9, 11, 13};

    index = binarySearch(nums,target);

    std::cout << index << '\n';
    return 0;
}