
/*
����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�

˵����

����㷨Ӧ�þ�������ʱ�临�Ӷȡ� ����Բ�ʹ�ö���ռ���ʵ����

ʾ�� 1:

����: [2,2,1]
���: 1

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/single-number
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