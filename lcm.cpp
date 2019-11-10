/*
https://www.nowcoder.com/questionTerminal/22948c2cad484e0291350abad86136c3
来源：牛客
正整数A和正整数B 的最小公倍数是指 能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数。
输入描述:
输入两个正整数A和B。
输出描述:
输出A和B的最小公倍数。
*/
#include <iostream>

using namespace std;

int main()
{
    int A = 0, B = 0;
    cin >> A >> B;
    
    int i = 1;
    while((B * i) % A != 0)
        ++i;
    cout << (B*i) << endl;
        
    return 0;
}