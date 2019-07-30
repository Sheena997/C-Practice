//����һ�����ǵݼ�˳��������������� A������ÿ�����ֵ�ƽ����ɵ������飬Ҫ��Ҳ���ǵݼ�˳������
//https://leetcode-cn.com/problems/squares-of-a-sorted-array/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize){
    int* B = (int*)malloc(ASize*sizeof(int));
    int i = 0;
    int j = ASize-1;
    int k = ASize-1;
    while(i<=j)
    {
        if(abs(A[i]) > abs(A[j]))
        {
            B[k] = A[i]*A[i];
            --k;
            ++i;
        }
        else
        {
            B[k] = A[j]*A[j];
            --k;
            --j;
        }
    }
    *returnSize = ASize;
    return B;
}
