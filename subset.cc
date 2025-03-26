#include <iostream>
#include <vector>

std::vector<std::vector<int>> powset(std::vector<int> &nums)
{
    std::vector<std::vector<int>> res;
    std::vector<int> temp;

    int size = nums.size();
    res.push_back(temp);
    for(int x=0;x<size;x++){
    for (int i = x; i < size; i++)
    {
        for (int j = 0;j<i; j++)
        {
            temp.push_back(nums[j]);
           
        }
        res.push_back(temp);
        temp.clear();
    }
}
    return res;
}

int main()
{
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> res = powset(nums);
    for (auto i : res)
    {
        for (auto j : i)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}