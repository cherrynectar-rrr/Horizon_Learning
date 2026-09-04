#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

/*int getElement (int a, const std::vector<int>& nums)
{
    return nums[a];
}*/

/*bool contains(const std::vector<int>& nums, int target)
{
    for(std::size_t i=0; i < nums.size(); i++)
    {
        if(nums[i] == target)
        {
            return true;
        }
    }
    return false;
}*/

void reverseArray (std::vector<int>& nums)
{
    for(std::size_t i = 0; i < nums.size()/2; i++)
    {
        
        std::swap(nums[i], nums[nums.size()-1-i]);
    }
}

int main()
{
    int n;
    //int a;
    std::vector<int>nums;

    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        nums.push_back(x);
    }

    reverseArray(nums);
    for(std::size_t i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i] << " ";
    }
    //std::cin >> a;

    //std::cout << getElement(a,nums);
    /*if(contains(nums, a))
        std::cout << "YES";
    else 
        std::cout << "NO";*/
        return 0;
}