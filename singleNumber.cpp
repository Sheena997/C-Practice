
/*
给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。

说明：

你的算法应该具有线性时间复杂度。 你可以不使用额外空间来实现吗？

示例 1:

输入: [2,2,1]
输出: 1

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/single-number
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size(); ++i)//for(int num : nums)  result ^= num;
        {
            result ^= nums[i];
        } 
        return result;
    }
};

/*
int singleNumber(int* nums, int numsSize){
    int n = 0;
    for(int i = 0; i < numsSize; ++i)
    {
        n ^= nums[i];
    }
    return n;
}
*/