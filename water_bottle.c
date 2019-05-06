#define _CRT_SECURE_NO_WARNINS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水。编程实现。 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int total = 20;
	int n = 20;
	int s = 0;
	while (n >= 1)
	{
		n += s;
		total = total + n / 2;
		s = n % 2;
		n /= 2;
	}
	printf("total=%d\n", total);
	system("pause");
	return 0;
}
