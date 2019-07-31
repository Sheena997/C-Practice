/*自除数 是指可以被它包含的每一位数除尽的数。

例如，128 是一个自除数，因为 128 % 1 == 0，128 % 2 == 0，128 % 8 == 0。

还有，自除数不允许包含 0 。

给定上边界和下边界数字，输出一个列表，列表的元素是边界（含边界）内所有的自除数。

链接：https://leetcode-cn.com/problems/self-dividing-numbers
*/

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* selfDividingNumbers(int left, int right, int* returnSize) {
	int* a = (int*)malloc(sizeof(int) * 1000);
	int k = 0;
	*returnSize = 0;
	for (int i = left; i <= right; ++i)
	{
		int num = i;
		while (num)
		{
			int n = num % 10;
			if (n == 0 || i % n != 0)
				break;
			num /= 10;
		}
		if (num == 0)
		{
			a[k] = i;
			++k;
		}
	}
	*returnSize = k;
	return a;
}
