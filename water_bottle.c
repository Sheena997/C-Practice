#define _CRT_SECURE_NO_WARNINS 1
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֡� 
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
