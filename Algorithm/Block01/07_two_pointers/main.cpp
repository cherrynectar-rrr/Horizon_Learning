#include <iostream>
#include <vector>

bool hasTwoSum(const std::vector<int>& nums,int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while(left < right)
    {
        if(nums[left] + nums[right] == target)
        {
            return true;
        }
        else if(nums[left] + nums[right] < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return false;
}
int main()
{
    int target;
    std::cin >> target;

    std::vector<int>nums = {1, 3, 4, 6, 9, 11, 15};

    std::cout << std::boolalpha;
    std::cout << hasTwoSum(nums,target) << '\n'; 

}