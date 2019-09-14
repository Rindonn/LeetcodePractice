/*
两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。

给出两个整数 x 和 y，计算它们之间的汉明距离。

注意：
0 ≤ x, y < 2^31.

示例:

输入: x = 1, y = 4

输出: 2

解释:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

上面的箭头指出了对应二进制位不同的位置。
*/

#include<iostream>
using namespace std;

class Solution {
public:
        int hammingDistance(int x, int y){
            int sum = x^y;
            cout<<sum<<endl;
            int count = 0;
            while (sum)
            {
                sum = sum & sum - 1;
                count++;
            }
            return count;
        }
};

int main(){
    Solution s;
    int a = s.hammingDistance(1,4);
    cout<<a<<endl;
    return 0;
}
//异或和与都是二进制运算，无需手动进行转换
/*执行结果：
通过
显示详情
执行用时 :
4 ms
, 在所有 C++ 提交中击败了
74.65%
的用户
内存消耗 :
8.1 MB
, 在所有 C++ 提交中击败了
88.77%
的用户*/
